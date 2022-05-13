/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcRotationalFrequencyMeasure.h"

// TYPE IfcRotationalFrequencyMeasure = REAL;
IfcRotationalFrequencyMeasure::IfcRotationalFrequencyMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcRotationalFrequencyMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRotationalFrequencyMeasure> copy_self( new IfcRotationalFrequencyMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcRotationalFrequencyMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCROTATIONALFREQUENCYMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcRotationalFrequencyMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcRotationalFrequencyMeasure> IfcRotationalFrequencyMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcRotationalFrequencyMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcRotationalFrequencyMeasure>(); }
	shared_ptr<IfcRotationalFrequencyMeasure> type_object( new IfcRotationalFrequencyMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
