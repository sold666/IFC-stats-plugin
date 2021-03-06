/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcReinforcingBarRoleEnum.h"

// TYPE IfcReinforcingBarRoleEnum = ENUMERATION OF	(MAIN	,SHEAR	,LIGATURE	,STUD	,PUNCHING	,EDGE	,RING	,ANCHORING	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcReinforcingBarRoleEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcReinforcingBarRoleEnum> copy_self( new IfcReinforcingBarRoleEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcReinforcingBarRoleEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCREINFORCINGBARROLEENUM("; }
	switch( m_enum )
	{
		case ENUM_MAIN:	stream << ".MAIN."; break;
		case ENUM_SHEAR:	stream << ".SHEAR."; break;
		case ENUM_LIGATURE:	stream << ".LIGATURE."; break;
		case ENUM_STUD:	stream << ".STUD."; break;
		case ENUM_PUNCHING:	stream << ".PUNCHING."; break;
		case ENUM_EDGE:	stream << ".EDGE."; break;
		case ENUM_RING:	stream << ".RING."; break;
		case ENUM_ANCHORING:	stream << ".ANCHORING."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcReinforcingBarRoleEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_MAIN:	return L"MAIN";
		case ENUM_SHEAR:	return L"SHEAR";
		case ENUM_LIGATURE:	return L"LIGATURE";
		case ENUM_STUD:	return L"STUD";
		case ENUM_PUNCHING:	return L"PUNCHING";
		case ENUM_EDGE:	return L"EDGE";
		case ENUM_RING:	return L"RING";
		case ENUM_ANCHORING:	return L"ANCHORING";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcReinforcingBarRoleEnum> IfcReinforcingBarRoleEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcReinforcingBarRoleEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcReinforcingBarRoleEnum>(); }
	shared_ptr<IfcReinforcingBarRoleEnum> type_object( new IfcReinforcingBarRoleEnum() );
	if( std_iequal( arg, L".MAIN." ) )
	{
		type_object->m_enum = IfcReinforcingBarRoleEnum::ENUM_MAIN;
	}
	else if( std_iequal( arg, L".SHEAR." ) )
	{
		type_object->m_enum = IfcReinforcingBarRoleEnum::ENUM_SHEAR;
	}
	else if( std_iequal( arg, L".LIGATURE." ) )
	{
		type_object->m_enum = IfcReinforcingBarRoleEnum::ENUM_LIGATURE;
	}
	else if( std_iequal( arg, L".STUD." ) )
	{
		type_object->m_enum = IfcReinforcingBarRoleEnum::ENUM_STUD;
	}
	else if( std_iequal( arg, L".PUNCHING." ) )
	{
		type_object->m_enum = IfcReinforcingBarRoleEnum::ENUM_PUNCHING;
	}
	else if( std_iequal( arg, L".EDGE." ) )
	{
		type_object->m_enum = IfcReinforcingBarRoleEnum::ENUM_EDGE;
	}
	else if( std_iequal( arg, L".RING." ) )
	{
		type_object->m_enum = IfcReinforcingBarRoleEnum::ENUM_RING;
	}
	else if( std_iequal( arg, L".ANCHORING." ) )
	{
		type_object->m_enum = IfcReinforcingBarRoleEnum::ENUM_ANCHORING;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcReinforcingBarRoleEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcReinforcingBarRoleEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
