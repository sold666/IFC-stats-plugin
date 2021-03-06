/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcPileConstructionEnum.h"

// TYPE IfcPileConstructionEnum = ENUMERATION OF	(CAST_IN_PLACE	,COMPOSITE	,PRECAST_CONCRETE	,PREFAB_STEEL	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcPileConstructionEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPileConstructionEnum> copy_self( new IfcPileConstructionEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcPileConstructionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPILECONSTRUCTIONENUM("; }
	switch( m_enum )
	{
		case ENUM_CAST_IN_PLACE:	stream << ".CAST_IN_PLACE."; break;
		case ENUM_COMPOSITE:	stream << ".COMPOSITE."; break;
		case ENUM_PRECAST_CONCRETE:	stream << ".PRECAST_CONCRETE."; break;
		case ENUM_PREFAB_STEEL:	stream << ".PREFAB_STEEL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcPileConstructionEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CAST_IN_PLACE:	return L"CAST_IN_PLACE";
		case ENUM_COMPOSITE:	return L"COMPOSITE";
		case ENUM_PRECAST_CONCRETE:	return L"PRECAST_CONCRETE";
		case ENUM_PREFAB_STEEL:	return L"PREFAB_STEEL";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcPileConstructionEnum> IfcPileConstructionEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPileConstructionEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPileConstructionEnum>(); }
	shared_ptr<IfcPileConstructionEnum> type_object( new IfcPileConstructionEnum() );
	if( std_iequal( arg, L".CAST_IN_PLACE." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_CAST_IN_PLACE;
	}
	else if( std_iequal( arg, L".COMPOSITE." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_COMPOSITE;
	}
	else if( std_iequal( arg, L".PRECAST_CONCRETE." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_PRECAST_CONCRETE;
	}
	else if( std_iequal( arg, L".PREFAB_STEEL." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_PREFAB_STEEL;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPileConstructionEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
