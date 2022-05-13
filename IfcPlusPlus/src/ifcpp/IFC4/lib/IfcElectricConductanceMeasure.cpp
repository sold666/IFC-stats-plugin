/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcElectricConductanceMeasure.h"

// TYPE IfcElectricConductanceMeasure = REAL;
IfcElectricConductanceMeasure::IfcElectricConductanceMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcElectricConductanceMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcElectricConductanceMeasure> copy_self( new IfcElectricConductanceMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcElectricConductanceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCELECTRICCONDUCTANCEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcElectricConductanceMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcElectricConductanceMeasure> IfcElectricConductanceMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcElectricConductanceMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcElectricConductanceMeasure>(); }
	shared_ptr<IfcElectricConductanceMeasure> type_object( new IfcElectricConductanceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
