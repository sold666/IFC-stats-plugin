/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcThermalTransmittanceMeasure.h"

// TYPE IfcThermalTransmittanceMeasure = REAL;
IfcThermalTransmittanceMeasure::IfcThermalTransmittanceMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcThermalTransmittanceMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcThermalTransmittanceMeasure> copy_self( new IfcThermalTransmittanceMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcThermalTransmittanceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTHERMALTRANSMITTANCEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcThermalTransmittanceMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcThermalTransmittanceMeasure> IfcThermalTransmittanceMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcThermalTransmittanceMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcThermalTransmittanceMeasure>(); }
	shared_ptr<IfcThermalTransmittanceMeasure> type_object( new IfcThermalTransmittanceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
