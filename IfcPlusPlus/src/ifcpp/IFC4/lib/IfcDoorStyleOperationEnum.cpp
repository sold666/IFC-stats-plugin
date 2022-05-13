/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDoorStyleOperationEnum.h"

// TYPE IfcDoorStyleOperationEnum = ENUMERATION OF	(SINGLE_SWING_LEFT	,SINGLE_SWING_RIGHT	,DOUBLE_DOOR_SINGLE_SWING	,DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT	,DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT	,DOUBLE_SWING_LEFT	,DOUBLE_SWING_RIGHT	,DOUBLE_DOOR_DOUBLE_SWING	,SLIDING_TO_LEFT	,SLIDING_TO_RIGHT	,DOUBLE_DOOR_SLIDING	,FOLDING_TO_LEFT	,FOLDING_TO_RIGHT	,DOUBLE_DOOR_FOLDING	,REVOLVING	,ROLLINGUP	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcDoorStyleOperationEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDoorStyleOperationEnum> copy_self( new IfcDoorStyleOperationEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDoorStyleOperationEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDOORSTYLEOPERATIONENUM("; }
	switch( m_enum )
	{
		case ENUM_SINGLE_SWING_LEFT:	stream << ".SINGLE_SWING_LEFT."; break;
		case ENUM_SINGLE_SWING_RIGHT:	stream << ".SINGLE_SWING_RIGHT."; break;
		case ENUM_DOUBLE_DOOR_SINGLE_SWING:	stream << ".DOUBLE_DOOR_SINGLE_SWING."; break;
		case ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT:	stream << ".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT."; break;
		case ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT:	stream << ".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT."; break;
		case ENUM_DOUBLE_SWING_LEFT:	stream << ".DOUBLE_SWING_LEFT."; break;
		case ENUM_DOUBLE_SWING_RIGHT:	stream << ".DOUBLE_SWING_RIGHT."; break;
		case ENUM_DOUBLE_DOOR_DOUBLE_SWING:	stream << ".DOUBLE_DOOR_DOUBLE_SWING."; break;
		case ENUM_SLIDING_TO_LEFT:	stream << ".SLIDING_TO_LEFT."; break;
		case ENUM_SLIDING_TO_RIGHT:	stream << ".SLIDING_TO_RIGHT."; break;
		case ENUM_DOUBLE_DOOR_SLIDING:	stream << ".DOUBLE_DOOR_SLIDING."; break;
		case ENUM_FOLDING_TO_LEFT:	stream << ".FOLDING_TO_LEFT."; break;
		case ENUM_FOLDING_TO_RIGHT:	stream << ".FOLDING_TO_RIGHT."; break;
		case ENUM_DOUBLE_DOOR_FOLDING:	stream << ".DOUBLE_DOOR_FOLDING."; break;
		case ENUM_REVOLVING:	stream << ".REVOLVING."; break;
		case ENUM_ROLLINGUP:	stream << ".ROLLINGUP."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDoorStyleOperationEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_SINGLE_SWING_LEFT:	return L"SINGLE_SWING_LEFT";
		case ENUM_SINGLE_SWING_RIGHT:	return L"SINGLE_SWING_RIGHT";
		case ENUM_DOUBLE_DOOR_SINGLE_SWING:	return L"DOUBLE_DOOR_SINGLE_SWING";
		case ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT:	return L"DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT";
		case ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT:	return L"DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT";
		case ENUM_DOUBLE_SWING_LEFT:	return L"DOUBLE_SWING_LEFT";
		case ENUM_DOUBLE_SWING_RIGHT:	return L"DOUBLE_SWING_RIGHT";
		case ENUM_DOUBLE_DOOR_DOUBLE_SWING:	return L"DOUBLE_DOOR_DOUBLE_SWING";
		case ENUM_SLIDING_TO_LEFT:	return L"SLIDING_TO_LEFT";
		case ENUM_SLIDING_TO_RIGHT:	return L"SLIDING_TO_RIGHT";
		case ENUM_DOUBLE_DOOR_SLIDING:	return L"DOUBLE_DOOR_SLIDING";
		case ENUM_FOLDING_TO_LEFT:	return L"FOLDING_TO_LEFT";
		case ENUM_FOLDING_TO_RIGHT:	return L"FOLDING_TO_RIGHT";
		case ENUM_DOUBLE_DOOR_FOLDING:	return L"DOUBLE_DOOR_FOLDING";
		case ENUM_REVOLVING:	return L"REVOLVING";
		case ENUM_ROLLINGUP:	return L"ROLLINGUP";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcDoorStyleOperationEnum> IfcDoorStyleOperationEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDoorStyleOperationEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDoorStyleOperationEnum>(); }
	shared_ptr<IfcDoorStyleOperationEnum> type_object( new IfcDoorStyleOperationEnum() );
	if( std_iequal( arg, L".SINGLE_SWING_LEFT." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_SINGLE_SWING_LEFT;
	}
	else if( std_iequal( arg, L".SINGLE_SWING_RIGHT." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_SINGLE_SWING_RIGHT;
	}
	else if( std_iequal( arg, L".DOUBLE_DOOR_SINGLE_SWING." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_DOUBLE_DOOR_SINGLE_SWING;
	}
	else if( std_iequal( arg, L".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT;
	}
	else if( std_iequal( arg, L".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT;
	}
	else if( std_iequal( arg, L".DOUBLE_SWING_LEFT." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_DOUBLE_SWING_LEFT;
	}
	else if( std_iequal( arg, L".DOUBLE_SWING_RIGHT." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_DOUBLE_SWING_RIGHT;
	}
	else if( std_iequal( arg, L".DOUBLE_DOOR_DOUBLE_SWING." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_DOUBLE_DOOR_DOUBLE_SWING;
	}
	else if( std_iequal( arg, L".SLIDING_TO_LEFT." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_SLIDING_TO_LEFT;
	}
	else if( std_iequal( arg, L".SLIDING_TO_RIGHT." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_SLIDING_TO_RIGHT;
	}
	else if( std_iequal( arg, L".DOUBLE_DOOR_SLIDING." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_DOUBLE_DOOR_SLIDING;
	}
	else if( std_iequal( arg, L".FOLDING_TO_LEFT." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_FOLDING_TO_LEFT;
	}
	else if( std_iequal( arg, L".FOLDING_TO_RIGHT." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_FOLDING_TO_RIGHT;
	}
	else if( std_iequal( arg, L".DOUBLE_DOOR_FOLDING." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_DOUBLE_DOOR_FOLDING;
	}
	else if( std_iequal( arg, L".REVOLVING." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_REVOLVING;
	}
	else if( std_iequal( arg, L".ROLLINGUP." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_ROLLINGUP;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDoorStyleOperationEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
