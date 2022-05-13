/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcIlluminanceMeasure.h"

// TYPE IfcIlluminanceMeasure = REAL;
IfcIlluminanceMeasure::IfcIlluminanceMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcIlluminanceMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcIlluminanceMeasure> copy_self( new IfcIlluminanceMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcIlluminanceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCILLUMINANCEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcIlluminanceMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcIlluminanceMeasure> IfcIlluminanceMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcIlluminanceMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcIlluminanceMeasure>(); }
	shared_ptr<IfcIlluminanceMeasure> type_object( new IfcIlluminanceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
