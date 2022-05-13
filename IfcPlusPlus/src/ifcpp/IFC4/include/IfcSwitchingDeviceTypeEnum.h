/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcSwitchingDeviceTypeEnum = ENUMERATION OF	(CONTACTOR	,DIMMERSWITCH	,EMERGENCYSTOP	,KEYPAD	,MOMENTARYSWITCH	,SELECTORSWITCH	,STARTER	,SWITCHDISCONNECTOR	,TOGGLESWITCH	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcSwitchingDeviceTypeEnum : virtual public BuildingObject
{
public:
	enum IfcSwitchingDeviceTypeEnumEnum
	{
		ENUM_CONTACTOR,
		ENUM_DIMMERSWITCH,
		ENUM_EMERGENCYSTOP,
		ENUM_KEYPAD,
		ENUM_MOMENTARYSWITCH,
		ENUM_SELECTORSWITCH,
		ENUM_STARTER,
		ENUM_SWITCHDISCONNECTOR,
		ENUM_TOGGLESWITCH,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcSwitchingDeviceTypeEnum() = default;
	IfcSwitchingDeviceTypeEnum( IfcSwitchingDeviceTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcSwitchingDeviceTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcSwitchingDeviceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcSwitchingDeviceTypeEnumEnum m_enum;
};

