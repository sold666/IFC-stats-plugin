/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcMemberTypeEnum.h"

// TYPE IfcMemberTypeEnum = ENUMERATION OF	(BRACE	,CHORD	,COLLAR	,MEMBER	,MULLION	,PLATE	,POST	,PURLIN	,RAFTER	,STRINGER	,STRUT	,STUD	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcMemberTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMemberTypeEnum> copy_self( new IfcMemberTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcMemberTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMEMBERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BRACE:	stream << ".BRACE."; break;
		case ENUM_CHORD:	stream << ".CHORD."; break;
		case ENUM_COLLAR:	stream << ".COLLAR."; break;
		case ENUM_MEMBER:	stream << ".MEMBER."; break;
		case ENUM_MULLION:	stream << ".MULLION."; break;
		case ENUM_PLATE:	stream << ".PLATE."; break;
		case ENUM_POST:	stream << ".POST."; break;
		case ENUM_PURLIN:	stream << ".PURLIN."; break;
		case ENUM_RAFTER:	stream << ".RAFTER."; break;
		case ENUM_STRINGER:	stream << ".STRINGER."; break;
		case ENUM_STRUT:	stream << ".STRUT."; break;
		case ENUM_STUD:	stream << ".STUD."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcMemberTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_BRACE:	return L"BRACE";
		case ENUM_CHORD:	return L"CHORD";
		case ENUM_COLLAR:	return L"COLLAR";
		case ENUM_MEMBER:	return L"MEMBER";
		case ENUM_MULLION:	return L"MULLION";
		case ENUM_PLATE:	return L"PLATE";
		case ENUM_POST:	return L"POST";
		case ENUM_PURLIN:	return L"PURLIN";
		case ENUM_RAFTER:	return L"RAFTER";
		case ENUM_STRINGER:	return L"STRINGER";
		case ENUM_STRUT:	return L"STRUT";
		case ENUM_STUD:	return L"STUD";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcMemberTypeEnum> IfcMemberTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcMemberTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcMemberTypeEnum>(); }
	shared_ptr<IfcMemberTypeEnum> type_object( new IfcMemberTypeEnum() );
	if( std_iequal( arg, L".BRACE." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_BRACE;
	}
	else if( std_iequal( arg, L".CHORD." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_CHORD;
	}
	else if( std_iequal( arg, L".COLLAR." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_COLLAR;
	}
	else if( std_iequal( arg, L".MEMBER." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_MEMBER;
	}
	else if( std_iequal( arg, L".MULLION." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_MULLION;
	}
	else if( std_iequal( arg, L".PLATE." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_PLATE;
	}
	else if( std_iequal( arg, L".POST." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_POST;
	}
	else if( std_iequal( arg, L".PURLIN." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_PURLIN;
	}
	else if( std_iequal( arg, L".RAFTER." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_RAFTER;
	}
	else if( std_iequal( arg, L".STRINGER." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_STRINGER;
	}
	else if( std_iequal( arg, L".STRUT." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_STRUT;
	}
	else if( std_iequal( arg, L".STUD." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_STUD;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcMemberTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
