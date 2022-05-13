/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcActionTypeEnum.h"

// TYPE IfcActionTypeEnum = ENUMERATION OF	(PERMANENT_G	,VARIABLE_Q	,EXTRAORDINARY_A	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcActionTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcActionTypeEnum> copy_self( new IfcActionTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcActionTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCACTIONTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_PERMANENT_G:	stream << ".PERMANENT_G."; break;
		case ENUM_VARIABLE_Q:	stream << ".VARIABLE_Q."; break;
		case ENUM_EXTRAORDINARY_A:	stream << ".EXTRAORDINARY_A."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcActionTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_PERMANENT_G:	return L"PERMANENT_G";
		case ENUM_VARIABLE_Q:	return L"VARIABLE_Q";
		case ENUM_EXTRAORDINARY_A:	return L"EXTRAORDINARY_A";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcActionTypeEnum> IfcActionTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcActionTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcActionTypeEnum>(); }
	shared_ptr<IfcActionTypeEnum> type_object( new IfcActionTypeEnum() );
	if( std_iequal( arg, L".PERMANENT_G." ) )
	{
		type_object->m_enum = IfcActionTypeEnum::ENUM_PERMANENT_G;
	}
	else if( std_iequal( arg, L".VARIABLE_Q." ) )
	{
		type_object->m_enum = IfcActionTypeEnum::ENUM_VARIABLE_Q;
	}
	else if( std_iequal( arg, L".EXTRAORDINARY_A." ) )
	{
		type_object->m_enum = IfcActionTypeEnum::ENUM_EXTRAORDINARY_A;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcActionTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcActionTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
