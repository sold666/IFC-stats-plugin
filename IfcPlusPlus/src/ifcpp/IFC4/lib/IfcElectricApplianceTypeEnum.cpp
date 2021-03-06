/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcElectricApplianceTypeEnum.h"

// TYPE IfcElectricApplianceTypeEnum = ENUMERATION OF	(DISHWASHER	,ELECTRICCOOKER	,FREESTANDINGELECTRICHEATER	,FREESTANDINGFAN	,FREESTANDINGWATERHEATER	,FREESTANDINGWATERCOOLER	,FREEZER	,FRIDGE_FREEZER	,HANDDRYER	,KITCHENMACHINE	,MICROWAVE	,PHOTOCOPIER	,REFRIGERATOR	,TUMBLEDRYER	,VENDINGMACHINE	,WASHINGMACHINE	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcElectricApplianceTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcElectricApplianceTypeEnum> copy_self( new IfcElectricApplianceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcElectricApplianceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCELECTRICAPPLIANCETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_DISHWASHER:	stream << ".DISHWASHER."; break;
		case ENUM_ELECTRICCOOKER:	stream << ".ELECTRICCOOKER."; break;
		case ENUM_FREESTANDINGELECTRICHEATER:	stream << ".FREESTANDINGELECTRICHEATER."; break;
		case ENUM_FREESTANDINGFAN:	stream << ".FREESTANDINGFAN."; break;
		case ENUM_FREESTANDINGWATERHEATER:	stream << ".FREESTANDINGWATERHEATER."; break;
		case ENUM_FREESTANDINGWATERCOOLER:	stream << ".FREESTANDINGWATERCOOLER."; break;
		case ENUM_FREEZER:	stream << ".FREEZER."; break;
		case ENUM_FRIDGE_FREEZER:	stream << ".FRIDGE_FREEZER."; break;
		case ENUM_HANDDRYER:	stream << ".HANDDRYER."; break;
		case ENUM_KITCHENMACHINE:	stream << ".KITCHENMACHINE."; break;
		case ENUM_MICROWAVE:	stream << ".MICROWAVE."; break;
		case ENUM_PHOTOCOPIER:	stream << ".PHOTOCOPIER."; break;
		case ENUM_REFRIGERATOR:	stream << ".REFRIGERATOR."; break;
		case ENUM_TUMBLEDRYER:	stream << ".TUMBLEDRYER."; break;
		case ENUM_VENDINGMACHINE:	stream << ".VENDINGMACHINE."; break;
		case ENUM_WASHINGMACHINE:	stream << ".WASHINGMACHINE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcElectricApplianceTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_DISHWASHER:	return L"DISHWASHER";
		case ENUM_ELECTRICCOOKER:	return L"ELECTRICCOOKER";
		case ENUM_FREESTANDINGELECTRICHEATER:	return L"FREESTANDINGELECTRICHEATER";
		case ENUM_FREESTANDINGFAN:	return L"FREESTANDINGFAN";
		case ENUM_FREESTANDINGWATERHEATER:	return L"FREESTANDINGWATERHEATER";
		case ENUM_FREESTANDINGWATERCOOLER:	return L"FREESTANDINGWATERCOOLER";
		case ENUM_FREEZER:	return L"FREEZER";
		case ENUM_FRIDGE_FREEZER:	return L"FRIDGE_FREEZER";
		case ENUM_HANDDRYER:	return L"HANDDRYER";
		case ENUM_KITCHENMACHINE:	return L"KITCHENMACHINE";
		case ENUM_MICROWAVE:	return L"MICROWAVE";
		case ENUM_PHOTOCOPIER:	return L"PHOTOCOPIER";
		case ENUM_REFRIGERATOR:	return L"REFRIGERATOR";
		case ENUM_TUMBLEDRYER:	return L"TUMBLEDRYER";
		case ENUM_VENDINGMACHINE:	return L"VENDINGMACHINE";
		case ENUM_WASHINGMACHINE:	return L"WASHINGMACHINE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcElectricApplianceTypeEnum> IfcElectricApplianceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcElectricApplianceTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcElectricApplianceTypeEnum>(); }
	shared_ptr<IfcElectricApplianceTypeEnum> type_object( new IfcElectricApplianceTypeEnum() );
	if( std_iequal( arg, L".DISHWASHER." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_DISHWASHER;
	}
	else if( std_iequal( arg, L".ELECTRICCOOKER." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_ELECTRICCOOKER;
	}
	else if( std_iequal( arg, L".FREESTANDINGELECTRICHEATER." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_FREESTANDINGELECTRICHEATER;
	}
	else if( std_iequal( arg, L".FREESTANDINGFAN." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_FREESTANDINGFAN;
	}
	else if( std_iequal( arg, L".FREESTANDINGWATERHEATER." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_FREESTANDINGWATERHEATER;
	}
	else if( std_iequal( arg, L".FREESTANDINGWATERCOOLER." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_FREESTANDINGWATERCOOLER;
	}
	else if( std_iequal( arg, L".FREEZER." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_FREEZER;
	}
	else if( std_iequal( arg, L".FRIDGE_FREEZER." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_FRIDGE_FREEZER;
	}
	else if( std_iequal( arg, L".HANDDRYER." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_HANDDRYER;
	}
	else if( std_iequal( arg, L".KITCHENMACHINE." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_KITCHENMACHINE;
	}
	else if( std_iequal( arg, L".MICROWAVE." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_MICROWAVE;
	}
	else if( std_iequal( arg, L".PHOTOCOPIER." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_PHOTOCOPIER;
	}
	else if( std_iequal( arg, L".REFRIGERATOR." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_REFRIGERATOR;
	}
	else if( std_iequal( arg, L".TUMBLEDRYER." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_TUMBLEDRYER;
	}
	else if( std_iequal( arg, L".VENDINGMACHINE." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_VENDINGMACHINE;
	}
	else if( std_iequal( arg, L".WASHINGMACHINE." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_WASHINGMACHINE;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcElectricApplianceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
