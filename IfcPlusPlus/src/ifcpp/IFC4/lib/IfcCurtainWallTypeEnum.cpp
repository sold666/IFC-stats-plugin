/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcCurtainWallTypeEnum.h"

// TYPE IfcCurtainWallTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcCurtainWallTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCurtainWallTypeEnum> copy_self( new IfcCurtainWallTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcCurtainWallTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCURTAINWALLTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcCurtainWallTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcCurtainWallTypeEnum> IfcCurtainWallTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcCurtainWallTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcCurtainWallTypeEnum>(); }
	shared_ptr<IfcCurtainWallTypeEnum> type_object( new IfcCurtainWallTypeEnum() );
	if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCurtainWallTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCurtainWallTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
