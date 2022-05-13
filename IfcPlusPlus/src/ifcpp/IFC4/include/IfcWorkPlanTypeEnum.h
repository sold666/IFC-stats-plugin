/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcWorkPlanTypeEnum = ENUMERATION OF	(ACTUAL	,BASELINE	,PLANNED	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcWorkPlanTypeEnum : virtual public BuildingObject
{
public:
	enum IfcWorkPlanTypeEnumEnum
	{
		ENUM_ACTUAL,
		ENUM_BASELINE,
		ENUM_PLANNED,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcWorkPlanTypeEnum() = default;
	IfcWorkPlanTypeEnum( IfcWorkPlanTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcWorkPlanTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcWorkPlanTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcWorkPlanTypeEnumEnum m_enum;
};

