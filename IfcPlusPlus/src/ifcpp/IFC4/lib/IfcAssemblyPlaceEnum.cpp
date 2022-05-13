/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcAssemblyPlaceEnum.h"

// TYPE IfcAssemblyPlaceEnum = ENUMERATION OF	(SITE	,FACTORY	,NOTDEFINED);
shared_ptr<BuildingObject> IfcAssemblyPlaceEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAssemblyPlaceEnum> copy_self( new IfcAssemblyPlaceEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcAssemblyPlaceEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCASSEMBLYPLACEENUM("; }
	switch( m_enum )
	{
		case ENUM_SITE:	stream << ".SITE."; break;
		case ENUM_FACTORY:	stream << ".FACTORY."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcAssemblyPlaceEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_SITE:	return L"SITE";
		case ENUM_FACTORY:	return L"FACTORY";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcAssemblyPlaceEnum> IfcAssemblyPlaceEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcAssemblyPlaceEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcAssemblyPlaceEnum>(); }
	shared_ptr<IfcAssemblyPlaceEnum> type_object( new IfcAssemblyPlaceEnum() );
	if( std_iequal( arg, L".SITE." ) )
	{
		type_object->m_enum = IfcAssemblyPlaceEnum::ENUM_SITE;
	}
	else if( std_iequal( arg, L".FACTORY." ) )
	{
		type_object->m_enum = IfcAssemblyPlaceEnum::ENUM_FACTORY;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcAssemblyPlaceEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
