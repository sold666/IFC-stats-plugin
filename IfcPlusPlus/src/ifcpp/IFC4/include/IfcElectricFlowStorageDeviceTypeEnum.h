/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcElectricFlowStorageDeviceTypeEnum = ENUMERATION OF	(BATTERY	,CAPACITORBANK	,HARMONICFILTER	,INDUCTORBANK	,UPS	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcElectricFlowStorageDeviceTypeEnum : virtual public BuildingObject
{
public:
	enum IfcElectricFlowStorageDeviceTypeEnumEnum
	{
		ENUM_BATTERY,
		ENUM_CAPACITORBANK,
		ENUM_HARMONICFILTER,
		ENUM_INDUCTORBANK,
		ENUM_UPS,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcElectricFlowStorageDeviceTypeEnum() = default;
	IfcElectricFlowStorageDeviceTypeEnum( IfcElectricFlowStorageDeviceTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcElectricFlowStorageDeviceTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcElectricFlowStorageDeviceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcElectricFlowStorageDeviceTypeEnumEnum m_enum;
};

