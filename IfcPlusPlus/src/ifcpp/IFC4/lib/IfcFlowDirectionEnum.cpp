/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcFlowDirectionEnum.h"

// TYPE IfcFlowDirectionEnum = ENUMERATION OF	(SOURCE	,SINK	,SOURCEANDSINK	,NOTDEFINED);
shared_ptr<BuildingObject> IfcFlowDirectionEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcFlowDirectionEnum> copy_self( new IfcFlowDirectionEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcFlowDirectionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFLOWDIRECTIONENUM("; }
	switch( m_enum )
	{
		case ENUM_SOURCE:	stream << ".SOURCE."; break;
		case ENUM_SINK:	stream << ".SINK."; break;
		case ENUM_SOURCEANDSINK:	stream << ".SOURCEANDSINK."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcFlowDirectionEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_SOURCE:	return L"SOURCE";
		case ENUM_SINK:	return L"SINK";
		case ENUM_SOURCEANDSINK:	return L"SOURCEANDSINK";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcFlowDirectionEnum> IfcFlowDirectionEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcFlowDirectionEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcFlowDirectionEnum>(); }
	shared_ptr<IfcFlowDirectionEnum> type_object( new IfcFlowDirectionEnum() );
	if( std_iequal( arg, L".SOURCE." ) )
	{
		type_object->m_enum = IfcFlowDirectionEnum::ENUM_SOURCE;
	}
	else if( std_iequal( arg, L".SINK." ) )
	{
		type_object->m_enum = IfcFlowDirectionEnum::ENUM_SINK;
	}
	else if( std_iequal( arg, L".SOURCEANDSINK." ) )
	{
		type_object->m_enum = IfcFlowDirectionEnum::ENUM_SOURCEANDSINK;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcFlowDirectionEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
