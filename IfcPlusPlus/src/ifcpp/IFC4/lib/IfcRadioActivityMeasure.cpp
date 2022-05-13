/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcRadioActivityMeasure.h"

// TYPE IfcRadioActivityMeasure = REAL;
IfcRadioActivityMeasure::IfcRadioActivityMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcRadioActivityMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRadioActivityMeasure> copy_self( new IfcRadioActivityMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcRadioActivityMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCRADIOACTIVITYMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcRadioActivityMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcRadioActivityMeasure> IfcRadioActivityMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcRadioActivityMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcRadioActivityMeasure>(); }
	shared_ptr<IfcRadioActivityMeasure> type_object( new IfcRadioActivityMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
