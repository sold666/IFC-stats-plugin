/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcChangeActionEnum = ENUMERATION OF	(NOCHANGE	,MODIFIED	,ADDED	,DELETED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcChangeActionEnum : virtual public BuildingObject
{
public:
	enum IfcChangeActionEnumEnum
	{
		ENUM_NOCHANGE,
		ENUM_MODIFIED,
		ENUM_ADDED,
		ENUM_DELETED,
		ENUM_NOTDEFINED
	};

	IfcChangeActionEnum() = default;
	IfcChangeActionEnum( IfcChangeActionEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcChangeActionEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcChangeActionEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcChangeActionEnumEnum m_enum;
};

