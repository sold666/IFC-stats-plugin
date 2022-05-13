/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcActionRequestTypeEnum = ENUMERATION OF	(EMAIL	,FAX	,PHONE	,POST	,VERBAL	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcActionRequestTypeEnum : virtual public BuildingObject
{
public:
	enum IfcActionRequestTypeEnumEnum
	{
		ENUM_EMAIL,
		ENUM_FAX,
		ENUM_PHONE,
		ENUM_POST,
		ENUM_VERBAL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcActionRequestTypeEnum() = default;
	IfcActionRequestTypeEnum( IfcActionRequestTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcActionRequestTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcActionRequestTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcActionRequestTypeEnumEnum m_enum;
};

