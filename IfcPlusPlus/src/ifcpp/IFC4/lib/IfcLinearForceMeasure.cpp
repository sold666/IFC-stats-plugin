/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcLinearForceMeasure.h"

// TYPE IfcLinearForceMeasure = REAL;
IfcLinearForceMeasure::IfcLinearForceMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcLinearForceMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLinearForceMeasure> copy_self( new IfcLinearForceMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcLinearForceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLINEARFORCEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLinearForceMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcLinearForceMeasure> IfcLinearForceMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLinearForceMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLinearForceMeasure>(); }
	shared_ptr<IfcLinearForceMeasure> type_object( new IfcLinearForceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
