/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcActionSourceTypeEnum = ENUMERATION OF	(DEAD_LOAD_G	,COMPLETION_G1	,LIVE_LOAD_Q	,SNOW_S	,WIND_W	,PRESTRESSING_P	,SETTLEMENT_U	,TEMPERATURE_T	,EARTHQUAKE_E	,FIRE	,IMPULSE	,IMPACT	,TRANSPORT	,ERECTION	,PROPPING	,SYSTEM_IMPERFECTION	,SHRINKAGE	,CREEP	,LACK_OF_FIT	,BUOYANCY	,ICE	,CURRENT	,WAVE	,RAIN	,BRAKES	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcActionSourceTypeEnum : virtual public BuildingObject
{
public:
	enum IfcActionSourceTypeEnumEnum
	{
		ENUM_DEAD_LOAD_G,
		ENUM_COMPLETION_G1,
		ENUM_LIVE_LOAD_Q,
		ENUM_SNOW_S,
		ENUM_WIND_W,
		ENUM_PRESTRESSING_P,
		ENUM_SETTLEMENT_U,
		ENUM_TEMPERATURE_T,
		ENUM_EARTHQUAKE_E,
		ENUM_FIRE,
		ENUM_IMPULSE,
		ENUM_IMPACT,
		ENUM_TRANSPORT,
		ENUM_ERECTION,
		ENUM_PROPPING,
		ENUM_SYSTEM_IMPERFECTION,
		ENUM_SHRINKAGE,
		ENUM_CREEP,
		ENUM_LACK_OF_FIT,
		ENUM_BUOYANCY,
		ENUM_ICE,
		ENUM_CURRENT,
		ENUM_WAVE,
		ENUM_RAIN,
		ENUM_BRAKES,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcActionSourceTypeEnum() = default;
	IfcActionSourceTypeEnum( IfcActionSourceTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcActionSourceTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcActionSourceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcActionSourceTypeEnumEnum m_enum;
};

