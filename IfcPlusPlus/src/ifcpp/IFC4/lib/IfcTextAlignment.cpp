/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcTextAlignment.h"

// TYPE IfcTextAlignment = STRING;
IfcTextAlignment::IfcTextAlignment( std::wstring value ) { m_value = value; }
shared_ptr<BuildingObject> IfcTextAlignment::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTextAlignment> copy_self( new IfcTextAlignment() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcTextAlignment::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTEXTALIGNMENT("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcTextAlignment::toString() const
{
	return m_value;
}
shared_ptr<IfcTextAlignment> IfcTextAlignment::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTextAlignment>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTextAlignment>(); }
	shared_ptr<IfcTextAlignment> type_object( new IfcTextAlignment() );
	readString( arg, type_object->m_value );
	return type_object;
}
