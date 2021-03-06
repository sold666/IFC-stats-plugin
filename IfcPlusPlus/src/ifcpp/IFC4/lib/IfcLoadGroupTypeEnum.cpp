/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcLoadGroupTypeEnum.h"

// TYPE IfcLoadGroupTypeEnum = ENUMERATION OF	(LOAD_GROUP	,LOAD_CASE	,LOAD_COMBINATION	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcLoadGroupTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLoadGroupTypeEnum> copy_self( new IfcLoadGroupTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcLoadGroupTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLOADGROUPTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_LOAD_GROUP:	stream << ".LOAD_GROUP."; break;
		case ENUM_LOAD_CASE:	stream << ".LOAD_CASE."; break;
		case ENUM_LOAD_COMBINATION:	stream << ".LOAD_COMBINATION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLoadGroupTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_LOAD_GROUP:	return L"LOAD_GROUP";
		case ENUM_LOAD_CASE:	return L"LOAD_CASE";
		case ENUM_LOAD_COMBINATION:	return L"LOAD_COMBINATION";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcLoadGroupTypeEnum> IfcLoadGroupTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLoadGroupTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLoadGroupTypeEnum>(); }
	shared_ptr<IfcLoadGroupTypeEnum> type_object( new IfcLoadGroupTypeEnum() );
	if( std_iequal( arg, L".LOAD_GROUP." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_LOAD_GROUP;
	}
	else if( std_iequal( arg, L".LOAD_CASE." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_LOAD_CASE;
	}
	else if( std_iequal( arg, L".LOAD_COMBINATION." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_LOAD_COMBINATION;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
