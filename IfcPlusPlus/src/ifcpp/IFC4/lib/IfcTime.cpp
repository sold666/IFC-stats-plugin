/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSimpleValue.h"
#include "ifcpp/IFC4/include/IfcTime.h"

// TYPE IfcTime = STRING;
IfcTime::IfcTime( std::wstring value ) { m_value = value; }
shared_ptr<BuildingObject> IfcTime::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTime> copy_self( new IfcTime() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcTime::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTIME("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcTime::toString() const
{
	return m_value;
}
shared_ptr<IfcTime> IfcTime::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTime>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTime>(); }
	shared_ptr<IfcTime> type_object( new IfcTime() );
	readString( arg, type_object->m_value );
	return type_object;
}
