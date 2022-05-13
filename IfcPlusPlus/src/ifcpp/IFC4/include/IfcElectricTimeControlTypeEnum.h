/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcElectricTimeControlTypeEnum = ENUMERATION OF	(TIMECLOCK	,TIMEDELAY	,RELAY	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcElectricTimeControlTypeEnum : virtual public BuildingObject
{
public:
	enum IfcElectricTimeControlTypeEnumEnum
	{
		ENUM_TIMECLOCK,
		ENUM_TIMEDELAY,
		ENUM_RELAY,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcElectricTimeControlTypeEnum() = default;
	IfcElectricTimeControlTypeEnum( IfcElectricTimeControlTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcElectricTimeControlTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcElectricTimeControlTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcElectricTimeControlTypeEnumEnum m_enum;
};

