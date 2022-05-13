/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcReflectanceMethodEnum.h"

// TYPE IfcReflectanceMethodEnum = ENUMERATION OF	(BLINN	,FLAT	,GLASS	,MATT	,METAL	,MIRROR	,PHONG	,PLASTIC	,STRAUSS	,NOTDEFINED);
shared_ptr<BuildingObject> IfcReflectanceMethodEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcReflectanceMethodEnum> copy_self( new IfcReflectanceMethodEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcReflectanceMethodEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCREFLECTANCEMETHODENUM("; }
	switch( m_enum )
	{
		case ENUM_BLINN:	stream << ".BLINN."; break;
		case ENUM_FLAT:	stream << ".FLAT."; break;
		case ENUM_GLASS:	stream << ".GLASS."; break;
		case ENUM_MATT:	stream << ".MATT."; break;
		case ENUM_METAL:	stream << ".METAL."; break;
		case ENUM_MIRROR:	stream << ".MIRROR."; break;
		case ENUM_PHONG:	stream << ".PHONG."; break;
		case ENUM_PLASTIC:	stream << ".PLASTIC."; break;
		case ENUM_STRAUSS:	stream << ".STRAUSS."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcReflectanceMethodEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_BLINN:	return L"BLINN";
		case ENUM_FLAT:	return L"FLAT";
		case ENUM_GLASS:	return L"GLASS";
		case ENUM_MATT:	return L"MATT";
		case ENUM_METAL:	return L"METAL";
		case ENUM_MIRROR:	return L"MIRROR";
		case ENUM_PHONG:	return L"PHONG";
		case ENUM_PLASTIC:	return L"PLASTIC";
		case ENUM_STRAUSS:	return L"STRAUSS";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcReflectanceMethodEnum> IfcReflectanceMethodEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcReflectanceMethodEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcReflectanceMethodEnum>(); }
	shared_ptr<IfcReflectanceMethodEnum> type_object( new IfcReflectanceMethodEnum() );
	if( std_iequal( arg, L".BLINN." ) )
	{
		type_object->m_enum = IfcReflectanceMethodEnum::ENUM_BLINN;
	}
	else if( std_iequal( arg, L".FLAT." ) )
	{
		type_object->m_enum = IfcReflectanceMethodEnum::ENUM_FLAT;
	}
	else if( std_iequal( arg, L".GLASS." ) )
	{
		type_object->m_enum = IfcReflectanceMethodEnum::ENUM_GLASS;
	}
	else if( std_iequal( arg, L".MATT." ) )
	{
		type_object->m_enum = IfcReflectanceMethodEnum::ENUM_MATT;
	}
	else if( std_iequal( arg, L".METAL." ) )
	{
		type_object->m_enum = IfcReflectanceMethodEnum::ENUM_METAL;
	}
	else if( std_iequal( arg, L".MIRROR." ) )
	{
		type_object->m_enum = IfcReflectanceMethodEnum::ENUM_MIRROR;
	}
	else if( std_iequal( arg, L".PHONG." ) )
	{
		type_object->m_enum = IfcReflectanceMethodEnum::ENUM_PHONG;
	}
	else if( std_iequal( arg, L".PLASTIC." ) )
	{
		type_object->m_enum = IfcReflectanceMethodEnum::ENUM_PLASTIC;
	}
	else if( std_iequal( arg, L".STRAUSS." ) )
	{
		type_object->m_enum = IfcReflectanceMethodEnum::ENUM_STRAUSS;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcReflectanceMethodEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
