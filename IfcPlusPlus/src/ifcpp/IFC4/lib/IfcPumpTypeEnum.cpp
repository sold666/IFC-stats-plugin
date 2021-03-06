/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcPumpTypeEnum.h"

// TYPE IfcPumpTypeEnum = ENUMERATION OF	(CIRCULATOR	,ENDSUCTION	,SPLITCASE	,SUBMERSIBLEPUMP	,SUMPPUMP	,VERTICALINLINE	,VERTICALTURBINE	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcPumpTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPumpTypeEnum> copy_self( new IfcPumpTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcPumpTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPUMPTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CIRCULATOR:	stream << ".CIRCULATOR."; break;
		case ENUM_ENDSUCTION:	stream << ".ENDSUCTION."; break;
		case ENUM_SPLITCASE:	stream << ".SPLITCASE."; break;
		case ENUM_SUBMERSIBLEPUMP:	stream << ".SUBMERSIBLEPUMP."; break;
		case ENUM_SUMPPUMP:	stream << ".SUMPPUMP."; break;
		case ENUM_VERTICALINLINE:	stream << ".VERTICALINLINE."; break;
		case ENUM_VERTICALTURBINE:	stream << ".VERTICALTURBINE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcPumpTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CIRCULATOR:	return L"CIRCULATOR";
		case ENUM_ENDSUCTION:	return L"ENDSUCTION";
		case ENUM_SPLITCASE:	return L"SPLITCASE";
		case ENUM_SUBMERSIBLEPUMP:	return L"SUBMERSIBLEPUMP";
		case ENUM_SUMPPUMP:	return L"SUMPPUMP";
		case ENUM_VERTICALINLINE:	return L"VERTICALINLINE";
		case ENUM_VERTICALTURBINE:	return L"VERTICALTURBINE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcPumpTypeEnum> IfcPumpTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPumpTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPumpTypeEnum>(); }
	shared_ptr<IfcPumpTypeEnum> type_object( new IfcPumpTypeEnum() );
	if( std_iequal( arg, L".CIRCULATOR." ) )
	{
		type_object->m_enum = IfcPumpTypeEnum::ENUM_CIRCULATOR;
	}
	else if( std_iequal( arg, L".ENDSUCTION." ) )
	{
		type_object->m_enum = IfcPumpTypeEnum::ENUM_ENDSUCTION;
	}
	else if( std_iequal( arg, L".SPLITCASE." ) )
	{
		type_object->m_enum = IfcPumpTypeEnum::ENUM_SPLITCASE;
	}
	else if( std_iequal( arg, L".SUBMERSIBLEPUMP." ) )
	{
		type_object->m_enum = IfcPumpTypeEnum::ENUM_SUBMERSIBLEPUMP;
	}
	else if( std_iequal( arg, L".SUMPPUMP." ) )
	{
		type_object->m_enum = IfcPumpTypeEnum::ENUM_SUMPPUMP;
	}
	else if( std_iequal( arg, L".VERTICALINLINE." ) )
	{
		type_object->m_enum = IfcPumpTypeEnum::ENUM_VERTICALINLINE;
	}
	else if( std_iequal( arg, L".VERTICALTURBINE." ) )
	{
		type_object->m_enum = IfcPumpTypeEnum::ENUM_VERTICALTURBINE;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcPumpTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPumpTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
