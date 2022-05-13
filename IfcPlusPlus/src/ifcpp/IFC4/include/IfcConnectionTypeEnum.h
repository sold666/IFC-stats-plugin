/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcConnectionTypeEnum = ENUMERATION OF	(ATPATH	,ATSTART	,ATEND	,NOTDEFINED);
class IFCQUERY_EXPORT IfcConnectionTypeEnum : virtual public BuildingObject
{
public:
	enum IfcConnectionTypeEnumEnum
	{
		ENUM_ATPATH,
		ENUM_ATSTART,
		ENUM_ATEND,
		ENUM_NOTDEFINED
	};

	IfcConnectionTypeEnum() = default;
	IfcConnectionTypeEnum( IfcConnectionTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcConnectionTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcConnectionTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcConnectionTypeEnumEnum m_enum;
};

