/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcWindowPanelOperationEnum = ENUMERATION OF	(SIDEHUNGRIGHTHAND	,SIDEHUNGLEFTHAND	,TILTANDTURNRIGHTHAND	,TILTANDTURNLEFTHAND	,TOPHUNG	,BOTTOMHUNG	,PIVOTHORIZONTAL	,PIVOTVERTICAL	,SLIDINGHORIZONTAL	,SLIDINGVERTICAL	,REMOVABLECASEMENT	,FIXEDCASEMENT	,OTHEROPERATION	,NOTDEFINED);
class IFCQUERY_EXPORT IfcWindowPanelOperationEnum : virtual public BuildingObject
{
public:
	enum IfcWindowPanelOperationEnumEnum
	{
		ENUM_SIDEHUNGRIGHTHAND,
		ENUM_SIDEHUNGLEFTHAND,
		ENUM_TILTANDTURNRIGHTHAND,
		ENUM_TILTANDTURNLEFTHAND,
		ENUM_TOPHUNG,
		ENUM_BOTTOMHUNG,
		ENUM_PIVOTHORIZONTAL,
		ENUM_PIVOTVERTICAL,
		ENUM_SLIDINGHORIZONTAL,
		ENUM_SLIDINGVERTICAL,
		ENUM_REMOVABLECASEMENT,
		ENUM_FIXEDCASEMENT,
		ENUM_OTHEROPERATION,
		ENUM_NOTDEFINED
	};

	IfcWindowPanelOperationEnum() = default;
	IfcWindowPanelOperationEnum( IfcWindowPanelOperationEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcWindowPanelOperationEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcWindowPanelOperationEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcWindowPanelOperationEnumEnum m_enum;
};

