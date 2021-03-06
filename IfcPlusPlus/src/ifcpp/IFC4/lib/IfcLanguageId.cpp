/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcLanguageId.h"

// TYPE IfcLanguageId = IfcIdentifier;
shared_ptr<BuildingObject> IfcLanguageId::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLanguageId> copy_self( new IfcLanguageId() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcLanguageId::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLANGUAGEID("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLanguageId::toString() const
{
	return m_value;
}
shared_ptr<IfcLanguageId> IfcLanguageId::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLanguageId>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLanguageId>(); }
	shared_ptr<IfcLanguageId> type_object( new IfcLanguageId() );
	readString( arg, type_object->m_value );
	return type_object;
}
