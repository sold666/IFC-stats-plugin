/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcEvaporatorTypeEnum = ENUMERATION OF	(DIRECTEXPANSION	,DIRECTEXPANSIONSHELLANDTUBE	,DIRECTEXPANSIONTUBEINTUBE	,DIRECTEXPANSIONBRAZEDPLATE	,FLOODEDSHELLANDTUBE	,SHELLANDCOIL	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcEvaporatorTypeEnum : virtual public BuildingObject
{
public:
	enum IfcEvaporatorTypeEnumEnum
	{
		ENUM_DIRECTEXPANSION,
		ENUM_DIRECTEXPANSIONSHELLANDTUBE,
		ENUM_DIRECTEXPANSIONTUBEINTUBE,
		ENUM_DIRECTEXPANSIONBRAZEDPLATE,
		ENUM_FLOODEDSHELLANDTUBE,
		ENUM_SHELLANDCOIL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcEvaporatorTypeEnum() = default;
	IfcEvaporatorTypeEnum( IfcEvaporatorTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcEvaporatorTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcEvaporatorTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcEvaporatorTypeEnumEnum m_enum;
};

