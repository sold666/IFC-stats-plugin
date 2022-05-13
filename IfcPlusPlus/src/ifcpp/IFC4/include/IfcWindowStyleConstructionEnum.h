/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcWindowStyleConstructionEnum = ENUMERATION OF	(ALUMINIUM	,HIGH_GRADE_STEEL	,STEEL	,WOOD	,ALUMINIUM_WOOD	,PLASTIC	,OTHER_CONSTRUCTION	,NOTDEFINED);
class IFCQUERY_EXPORT IfcWindowStyleConstructionEnum : virtual public BuildingObject
{
public:
	enum IfcWindowStyleConstructionEnumEnum
	{
		ENUM_ALUMINIUM,
		ENUM_HIGH_GRADE_STEEL,
		ENUM_STEEL,
		ENUM_WOOD,
		ENUM_ALUMINIUM_WOOD,
		ENUM_PLASTIC,
		ENUM_OTHER_CONSTRUCTION,
		ENUM_NOTDEFINED
	};

	IfcWindowStyleConstructionEnum() = default;
	IfcWindowStyleConstructionEnum( IfcWindowStyleConstructionEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcWindowStyleConstructionEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcWindowStyleConstructionEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcWindowStyleConstructionEnumEnum m_enum;
};
