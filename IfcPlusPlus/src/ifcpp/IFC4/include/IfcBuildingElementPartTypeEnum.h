/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcBuildingElementPartTypeEnum = ENUMERATION OF	(INSULATION	,PRECASTPANEL	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcBuildingElementPartTypeEnum : virtual public BuildingObject
{
public:
	enum IfcBuildingElementPartTypeEnumEnum
	{
		ENUM_INSULATION,
		ENUM_PRECASTPANEL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcBuildingElementPartTypeEnum() = default;
	IfcBuildingElementPartTypeEnum( IfcBuildingElementPartTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcBuildingElementPartTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcBuildingElementPartTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcBuildingElementPartTypeEnumEnum m_enum;
};
