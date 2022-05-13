/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcUnitaryControlElementTypeEnum.h"

// TYPE IfcUnitaryControlElementTypeEnum = ENUMERATION OF	(ALARMPANEL	,CONTROLPANEL	,GASDETECTIONPANEL	,INDICATORPANEL	,MIMICPANEL	,HUMIDISTAT	,THERMOSTAT	,WEATHERSTATION	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcUnitaryControlElementTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcUnitaryControlElementTypeEnum> copy_self( new IfcUnitaryControlElementTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcUnitaryControlElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCUNITARYCONTROLELEMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ALARMPANEL:	stream << ".ALARMPANEL."; break;
		case ENUM_CONTROLPANEL:	stream << ".CONTROLPANEL."; break;
		case ENUM_GASDETECTIONPANEL:	stream << ".GASDETECTIONPANEL."; break;
		case ENUM_INDICATORPANEL:	stream << ".INDICATORPANEL."; break;
		case ENUM_MIMICPANEL:	stream << ".MIMICPANEL."; break;
		case ENUM_HUMIDISTAT:	stream << ".HUMIDISTAT."; break;
		case ENUM_THERMOSTAT:	stream << ".THERMOSTAT."; break;
		case ENUM_WEATHERSTATION:	stream << ".WEATHERSTATION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcUnitaryControlElementTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ALARMPANEL:	return L"ALARMPANEL";
		case ENUM_CONTROLPANEL:	return L"CONTROLPANEL";
		case ENUM_GASDETECTIONPANEL:	return L"GASDETECTIONPANEL";
		case ENUM_INDICATORPANEL:	return L"INDICATORPANEL";
		case ENUM_MIMICPANEL:	return L"MIMICPANEL";
		case ENUM_HUMIDISTAT:	return L"HUMIDISTAT";
		case ENUM_THERMOSTAT:	return L"THERMOSTAT";
		case ENUM_WEATHERSTATION:	return L"WEATHERSTATION";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcUnitaryControlElementTypeEnum> IfcUnitaryControlElementTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcUnitaryControlElementTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcUnitaryControlElementTypeEnum>(); }
	shared_ptr<IfcUnitaryControlElementTypeEnum> type_object( new IfcUnitaryControlElementTypeEnum() );
	if( std_iequal( arg, L".ALARMPANEL." ) )
	{
		type_object->m_enum = IfcUnitaryControlElementTypeEnum::ENUM_ALARMPANEL;
	}
	else if( std_iequal( arg, L".CONTROLPANEL." ) )
	{
		type_object->m_enum = IfcUnitaryControlElementTypeEnum::ENUM_CONTROLPANEL;
	}
	else if( std_iequal( arg, L".GASDETECTIONPANEL." ) )
	{
		type_object->m_enum = IfcUnitaryControlElementTypeEnum::ENUM_GASDETECTIONPANEL;
	}
	else if( std_iequal( arg, L".INDICATORPANEL." ) )
	{
		type_object->m_enum = IfcUnitaryControlElementTypeEnum::ENUM_INDICATORPANEL;
	}
	else if( std_iequal( arg, L".MIMICPANEL." ) )
	{
		type_object->m_enum = IfcUnitaryControlElementTypeEnum::ENUM_MIMICPANEL;
	}
	else if( std_iequal( arg, L".HUMIDISTAT." ) )
	{
		type_object->m_enum = IfcUnitaryControlElementTypeEnum::ENUM_HUMIDISTAT;
	}
	else if( std_iequal( arg, L".THERMOSTAT." ) )
	{
		type_object->m_enum = IfcUnitaryControlElementTypeEnum::ENUM_THERMOSTAT;
	}
	else if( std_iequal( arg, L".WEATHERSTATION." ) )
	{
		type_object->m_enum = IfcUnitaryControlElementTypeEnum::ENUM_WEATHERSTATION;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcUnitaryControlElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcUnitaryControlElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
