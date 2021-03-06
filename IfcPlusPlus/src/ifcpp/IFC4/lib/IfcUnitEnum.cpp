/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcUnitEnum.h"

// TYPE IfcUnitEnum = ENUMERATION OF	(ABSORBEDDOSEUNIT	,AMOUNTOFSUBSTANCEUNIT	,AREAUNIT	,DOSEEQUIVALENTUNIT	,ELECTRICCAPACITANCEUNIT	,ELECTRICCHARGEUNIT	,ELECTRICCONDUCTANCEUNIT	,ELECTRICCURRENTUNIT	,ELECTRICRESISTANCEUNIT	,ELECTRICVOLTAGEUNIT	,ENERGYUNIT	,FORCEUNIT	,FREQUENCYUNIT	,ILLUMINANCEUNIT	,INDUCTANCEUNIT	,LENGTHUNIT	,LUMINOUSFLUXUNIT	,LUMINOUSINTENSITYUNIT	,MAGNETICFLUXDENSITYUNIT	,MAGNETICFLUXUNIT	,MASSUNIT	,PLANEANGLEUNIT	,POWERUNIT	,PRESSUREUNIT	,RADIOACTIVITYUNIT	,SOLIDANGLEUNIT	,THERMODYNAMICTEMPERATUREUNIT	,TIMEUNIT	,VOLUMEUNIT	,USERDEFINED);
shared_ptr<BuildingObject> IfcUnitEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcUnitEnum> copy_self( new IfcUnitEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcUnitEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCUNITENUM("; }
	switch( m_enum )
	{
		case ENUM_ABSORBEDDOSEUNIT:	stream << ".ABSORBEDDOSEUNIT."; break;
		case ENUM_AMOUNTOFSUBSTANCEUNIT:	stream << ".AMOUNTOFSUBSTANCEUNIT."; break;
		case ENUM_AREAUNIT:	stream << ".AREAUNIT."; break;
		case ENUM_DOSEEQUIVALENTUNIT:	stream << ".DOSEEQUIVALENTUNIT."; break;
		case ENUM_ELECTRICCAPACITANCEUNIT:	stream << ".ELECTRICCAPACITANCEUNIT."; break;
		case ENUM_ELECTRICCHARGEUNIT:	stream << ".ELECTRICCHARGEUNIT."; break;
		case ENUM_ELECTRICCONDUCTANCEUNIT:	stream << ".ELECTRICCONDUCTANCEUNIT."; break;
		case ENUM_ELECTRICCURRENTUNIT:	stream << ".ELECTRICCURRENTUNIT."; break;
		case ENUM_ELECTRICRESISTANCEUNIT:	stream << ".ELECTRICRESISTANCEUNIT."; break;
		case ENUM_ELECTRICVOLTAGEUNIT:	stream << ".ELECTRICVOLTAGEUNIT."; break;
		case ENUM_ENERGYUNIT:	stream << ".ENERGYUNIT."; break;
		case ENUM_FORCEUNIT:	stream << ".FORCEUNIT."; break;
		case ENUM_FREQUENCYUNIT:	stream << ".FREQUENCYUNIT."; break;
		case ENUM_ILLUMINANCEUNIT:	stream << ".ILLUMINANCEUNIT."; break;
		case ENUM_INDUCTANCEUNIT:	stream << ".INDUCTANCEUNIT."; break;
		case ENUM_LENGTHUNIT:	stream << ".LENGTHUNIT."; break;
		case ENUM_LUMINOUSFLUXUNIT:	stream << ".LUMINOUSFLUXUNIT."; break;
		case ENUM_LUMINOUSINTENSITYUNIT:	stream << ".LUMINOUSINTENSITYUNIT."; break;
		case ENUM_MAGNETICFLUXDENSITYUNIT:	stream << ".MAGNETICFLUXDENSITYUNIT."; break;
		case ENUM_MAGNETICFLUXUNIT:	stream << ".MAGNETICFLUXUNIT."; break;
		case ENUM_MASSUNIT:	stream << ".MASSUNIT."; break;
		case ENUM_PLANEANGLEUNIT:	stream << ".PLANEANGLEUNIT."; break;
		case ENUM_POWERUNIT:	stream << ".POWERUNIT."; break;
		case ENUM_PRESSUREUNIT:	stream << ".PRESSUREUNIT."; break;
		case ENUM_RADIOACTIVITYUNIT:	stream << ".RADIOACTIVITYUNIT."; break;
		case ENUM_SOLIDANGLEUNIT:	stream << ".SOLIDANGLEUNIT."; break;
		case ENUM_THERMODYNAMICTEMPERATUREUNIT:	stream << ".THERMODYNAMICTEMPERATUREUNIT."; break;
		case ENUM_TIMEUNIT:	stream << ".TIMEUNIT."; break;
		case ENUM_VOLUMEUNIT:	stream << ".VOLUMEUNIT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcUnitEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ABSORBEDDOSEUNIT:	return L"ABSORBEDDOSEUNIT";
		case ENUM_AMOUNTOFSUBSTANCEUNIT:	return L"AMOUNTOFSUBSTANCEUNIT";
		case ENUM_AREAUNIT:	return L"AREAUNIT";
		case ENUM_DOSEEQUIVALENTUNIT:	return L"DOSEEQUIVALENTUNIT";
		case ENUM_ELECTRICCAPACITANCEUNIT:	return L"ELECTRICCAPACITANCEUNIT";
		case ENUM_ELECTRICCHARGEUNIT:	return L"ELECTRICCHARGEUNIT";
		case ENUM_ELECTRICCONDUCTANCEUNIT:	return L"ELECTRICCONDUCTANCEUNIT";
		case ENUM_ELECTRICCURRENTUNIT:	return L"ELECTRICCURRENTUNIT";
		case ENUM_ELECTRICRESISTANCEUNIT:	return L"ELECTRICRESISTANCEUNIT";
		case ENUM_ELECTRICVOLTAGEUNIT:	return L"ELECTRICVOLTAGEUNIT";
		case ENUM_ENERGYUNIT:	return L"ENERGYUNIT";
		case ENUM_FORCEUNIT:	return L"FORCEUNIT";
		case ENUM_FREQUENCYUNIT:	return L"FREQUENCYUNIT";
		case ENUM_ILLUMINANCEUNIT:	return L"ILLUMINANCEUNIT";
		case ENUM_INDUCTANCEUNIT:	return L"INDUCTANCEUNIT";
		case ENUM_LENGTHUNIT:	return L"LENGTHUNIT";
		case ENUM_LUMINOUSFLUXUNIT:	return L"LUMINOUSFLUXUNIT";
		case ENUM_LUMINOUSINTENSITYUNIT:	return L"LUMINOUSINTENSITYUNIT";
		case ENUM_MAGNETICFLUXDENSITYUNIT:	return L"MAGNETICFLUXDENSITYUNIT";
		case ENUM_MAGNETICFLUXUNIT:	return L"MAGNETICFLUXUNIT";
		case ENUM_MASSUNIT:	return L"MASSUNIT";
		case ENUM_PLANEANGLEUNIT:	return L"PLANEANGLEUNIT";
		case ENUM_POWERUNIT:	return L"POWERUNIT";
		case ENUM_PRESSUREUNIT:	return L"PRESSUREUNIT";
		case ENUM_RADIOACTIVITYUNIT:	return L"RADIOACTIVITYUNIT";
		case ENUM_SOLIDANGLEUNIT:	return L"SOLIDANGLEUNIT";
		case ENUM_THERMODYNAMICTEMPERATUREUNIT:	return L"THERMODYNAMICTEMPERATUREUNIT";
		case ENUM_TIMEUNIT:	return L"TIMEUNIT";
		case ENUM_VOLUMEUNIT:	return L"VOLUMEUNIT";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
	}
	return L"";
}
shared_ptr<IfcUnitEnum> IfcUnitEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcUnitEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcUnitEnum>(); }
	shared_ptr<IfcUnitEnum> type_object( new IfcUnitEnum() );
	if( std_iequal( arg, L".ABSORBEDDOSEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_ABSORBEDDOSEUNIT;
	}
	else if( std_iequal( arg, L".AMOUNTOFSUBSTANCEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_AMOUNTOFSUBSTANCEUNIT;
	}
	else if( std_iequal( arg, L".AREAUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_AREAUNIT;
	}
	else if( std_iequal( arg, L".DOSEEQUIVALENTUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_DOSEEQUIVALENTUNIT;
	}
	else if( std_iequal( arg, L".ELECTRICCAPACITANCEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_ELECTRICCAPACITANCEUNIT;
	}
	else if( std_iequal( arg, L".ELECTRICCHARGEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_ELECTRICCHARGEUNIT;
	}
	else if( std_iequal( arg, L".ELECTRICCONDUCTANCEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_ELECTRICCONDUCTANCEUNIT;
	}
	else if( std_iequal( arg, L".ELECTRICCURRENTUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_ELECTRICCURRENTUNIT;
	}
	else if( std_iequal( arg, L".ELECTRICRESISTANCEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_ELECTRICRESISTANCEUNIT;
	}
	else if( std_iequal( arg, L".ELECTRICVOLTAGEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_ELECTRICVOLTAGEUNIT;
	}
	else if( std_iequal( arg, L".ENERGYUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_ENERGYUNIT;
	}
	else if( std_iequal( arg, L".FORCEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_FORCEUNIT;
	}
	else if( std_iequal( arg, L".FREQUENCYUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_FREQUENCYUNIT;
	}
	else if( std_iequal( arg, L".ILLUMINANCEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_ILLUMINANCEUNIT;
	}
	else if( std_iequal( arg, L".INDUCTANCEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_INDUCTANCEUNIT;
	}
	else if( std_iequal( arg, L".LENGTHUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_LENGTHUNIT;
	}
	else if( std_iequal( arg, L".LUMINOUSFLUXUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_LUMINOUSFLUXUNIT;
	}
	else if( std_iequal( arg, L".LUMINOUSINTENSITYUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_LUMINOUSINTENSITYUNIT;
	}
	else if( std_iequal( arg, L".MAGNETICFLUXDENSITYUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_MAGNETICFLUXDENSITYUNIT;
	}
	else if( std_iequal( arg, L".MAGNETICFLUXUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_MAGNETICFLUXUNIT;
	}
	else if( std_iequal( arg, L".MASSUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_MASSUNIT;
	}
	else if( std_iequal( arg, L".PLANEANGLEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_PLANEANGLEUNIT;
	}
	else if( std_iequal( arg, L".POWERUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_POWERUNIT;
	}
	else if( std_iequal( arg, L".PRESSUREUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_PRESSUREUNIT;
	}
	else if( std_iequal( arg, L".RADIOACTIVITYUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_RADIOACTIVITYUNIT;
	}
	else if( std_iequal( arg, L".SOLIDANGLEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_SOLIDANGLEUNIT;
	}
	else if( std_iequal( arg, L".THERMODYNAMICTEMPERATUREUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_THERMODYNAMICTEMPERATUREUNIT;
	}
	else if( std_iequal( arg, L".TIMEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_TIMEUNIT;
	}
	else if( std_iequal( arg, L".VOLUMEUNIT." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_VOLUMEUNIT;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcUnitEnum::ENUM_USERDEFINED;
	}
	return type_object;
}
