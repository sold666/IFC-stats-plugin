/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcWindowPanelPositionEnum = ENUMERATION OF	(LEFT	,MIDDLE	,RIGHT	,BOTTOM	,TOP	,NOTDEFINED);
class IFCQUERY_EXPORT IfcWindowPanelPositionEnum : virtual public BuildingObject
{
public:
	enum IfcWindowPanelPositionEnumEnum
	{
		ENUM_LEFT,
		ENUM_MIDDLE,
		ENUM_RIGHT,
		ENUM_BOTTOM,
		ENUM_TOP,
		ENUM_NOTDEFINED
	};

	IfcWindowPanelPositionEnum() = default;
	IfcWindowPanelPositionEnum( IfcWindowPanelPositionEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcWindowPanelPositionEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcWindowPanelPositionEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcWindowPanelPositionEnumEnum m_enum;
};

