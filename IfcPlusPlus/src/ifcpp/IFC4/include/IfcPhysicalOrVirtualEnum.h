/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcPhysicalOrVirtualEnum = ENUMERATION OF	(PHYSICAL	,VIRTUAL	,NOTDEFINED);
class IFCQUERY_EXPORT IfcPhysicalOrVirtualEnum : virtual public BuildingObject
{
public:
	enum IfcPhysicalOrVirtualEnumEnum
	{
		ENUM_PHYSICAL,
		ENUM_VIRTUAL,
		ENUM_NOTDEFINED
	};

	IfcPhysicalOrVirtualEnum() = default;
	IfcPhysicalOrVirtualEnum( IfcPhysicalOrVirtualEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcPhysicalOrVirtualEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcPhysicalOrVirtualEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcPhysicalOrVirtualEnumEnum m_enum;
};

