/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcLightFixtureTypeEnum.h"

// TYPE IfcLightFixtureTypeEnum = ENUMERATION OF	(POINTSOURCE	,DIRECTIONSOURCE	,SECURITYLIGHTING	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcLightFixtureTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLightFixtureTypeEnum> copy_self( new IfcLightFixtureTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcLightFixtureTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLIGHTFIXTURETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_POINTSOURCE:	stream << ".POINTSOURCE."; break;
		case ENUM_DIRECTIONSOURCE:	stream << ".DIRECTIONSOURCE."; break;
		case ENUM_SECURITYLIGHTING:	stream << ".SECURITYLIGHTING."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLightFixtureTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_POINTSOURCE:	return L"POINTSOURCE";
		case ENUM_DIRECTIONSOURCE:	return L"DIRECTIONSOURCE";
		case ENUM_SECURITYLIGHTING:	return L"SECURITYLIGHTING";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcLightFixtureTypeEnum> IfcLightFixtureTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLightFixtureTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLightFixtureTypeEnum>(); }
	shared_ptr<IfcLightFixtureTypeEnum> type_object( new IfcLightFixtureTypeEnum() );
	if( std_iequal( arg, L".POINTSOURCE." ) )
	{
		type_object->m_enum = IfcLightFixtureTypeEnum::ENUM_POINTSOURCE;
	}
	else if( std_iequal( arg, L".DIRECTIONSOURCE." ) )
	{
		type_object->m_enum = IfcLightFixtureTypeEnum::ENUM_DIRECTIONSOURCE;
	}
	else if( std_iequal( arg, L".SECURITYLIGHTING." ) )
	{
		type_object->m_enum = IfcLightFixtureTypeEnum::ENUM_SECURITYLIGHTING;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcLightFixtureTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcLightFixtureTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
