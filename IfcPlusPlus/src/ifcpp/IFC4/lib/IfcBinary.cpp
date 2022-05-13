/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSimpleValue.h"
#include "ifcpp/IFC4/include/IfcBinary.h"

// TYPE IfcBinary = BINARY;
IfcBinary::IfcBinary( std::wstring value ) { m_value = value; }
shared_ptr<BuildingObject> IfcBinary::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcBinary> copy_self( new IfcBinary() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcBinary::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCBINARY("; }
	stream << "\"" << encodeStepString( m_value ) << "\"";
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcBinary::toString() const
{
	return m_value;
}
shared_ptr<IfcBinary> IfcBinary::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcBinary>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcBinary>(); }
	shared_ptr<IfcBinary> type_object( new IfcBinary() );
	readBinaryString( arg, type_object->m_value );
	return type_object;
}
