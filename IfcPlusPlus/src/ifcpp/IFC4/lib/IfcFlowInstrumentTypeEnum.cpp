/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcFlowInstrumentTypeEnum.h"

// TYPE IfcFlowInstrumentTypeEnum = ENUMERATION OF	(PRESSUREGAUGE	,THERMOMETER	,AMMETER	,FREQUENCYMETER	,POWERFACTORMETER	,PHASEANGLEMETER	,VOLTMETER_PEAK	,VOLTMETER_RMS	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcFlowInstrumentTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcFlowInstrumentTypeEnum> copy_self( new IfcFlowInstrumentTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcFlowInstrumentTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFLOWINSTRUMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_PRESSUREGAUGE:	stream << ".PRESSUREGAUGE."; break;
		case ENUM_THERMOMETER:	stream << ".THERMOMETER."; break;
		case ENUM_AMMETER:	stream << ".AMMETER."; break;
		case ENUM_FREQUENCYMETER:	stream << ".FREQUENCYMETER."; break;
		case ENUM_POWERFACTORMETER:	stream << ".POWERFACTORMETER."; break;
		case ENUM_PHASEANGLEMETER:	stream << ".PHASEANGLEMETER."; break;
		case ENUM_VOLTMETER_PEAK:	stream << ".VOLTMETER_PEAK."; break;
		case ENUM_VOLTMETER_RMS:	stream << ".VOLTMETER_RMS."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcFlowInstrumentTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_PRESSUREGAUGE:	return L"PRESSUREGAUGE";
		case ENUM_THERMOMETER:	return L"THERMOMETER";
		case ENUM_AMMETER:	return L"AMMETER";
		case ENUM_FREQUENCYMETER:	return L"FREQUENCYMETER";
		case ENUM_POWERFACTORMETER:	return L"POWERFACTORMETER";
		case ENUM_PHASEANGLEMETER:	return L"PHASEANGLEMETER";
		case ENUM_VOLTMETER_PEAK:	return L"VOLTMETER_PEAK";
		case ENUM_VOLTMETER_RMS:	return L"VOLTMETER_RMS";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcFlowInstrumentTypeEnum> IfcFlowInstrumentTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcFlowInstrumentTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcFlowInstrumentTypeEnum>(); }
	shared_ptr<IfcFlowInstrumentTypeEnum> type_object( new IfcFlowInstrumentTypeEnum() );
	if( std_iequal( arg, L".PRESSUREGAUGE." ) )
	{
		type_object->m_enum = IfcFlowInstrumentTypeEnum::ENUM_PRESSUREGAUGE;
	}
	else if( std_iequal( arg, L".THERMOMETER." ) )
	{
		type_object->m_enum = IfcFlowInstrumentTypeEnum::ENUM_THERMOMETER;
	}
	else if( std_iequal( arg, L".AMMETER." ) )
	{
		type_object->m_enum = IfcFlowInstrumentTypeEnum::ENUM_AMMETER;
	}
	else if( std_iequal( arg, L".FREQUENCYMETER." ) )
	{
		type_object->m_enum = IfcFlowInstrumentTypeEnum::ENUM_FREQUENCYMETER;
	}
	else if( std_iequal( arg, L".POWERFACTORMETER." ) )
	{
		type_object->m_enum = IfcFlowInstrumentTypeEnum::ENUM_POWERFACTORMETER;
	}
	else if( std_iequal( arg, L".PHASEANGLEMETER." ) )
	{
		type_object->m_enum = IfcFlowInstrumentTypeEnum::ENUM_PHASEANGLEMETER;
	}
	else if( std_iequal( arg, L".VOLTMETER_PEAK." ) )
	{
		type_object->m_enum = IfcFlowInstrumentTypeEnum::ENUM_VOLTMETER_PEAK;
	}
	else if( std_iequal( arg, L".VOLTMETER_RMS." ) )
	{
		type_object->m_enum = IfcFlowInstrumentTypeEnum::ENUM_VOLTMETER_RMS;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcFlowInstrumentTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcFlowInstrumentTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
