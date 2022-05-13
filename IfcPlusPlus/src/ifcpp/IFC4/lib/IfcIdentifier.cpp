/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSimpleValue.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"

// TYPE IfcIdentifier = STRING(255);
IfcIdentifier::IfcIdentifier( std::wstring value ) { m_value = value; }
shared_ptr<BuildingObject> IfcIdentifier::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcIdentifier> copy_self( new IfcIdentifier() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcIdentifier::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCIDENTIFIER("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcIdentifier::toString() const
{
	return m_value;
}
shared_ptr<IfcIdentifier> IfcIdentifier::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcIdentifier>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcIdentifier>(); }
	shared_ptr<IfcIdentifier> type_object( new IfcIdentifier() );
	readString( arg, type_object->m_value );
	return type_object;
}
