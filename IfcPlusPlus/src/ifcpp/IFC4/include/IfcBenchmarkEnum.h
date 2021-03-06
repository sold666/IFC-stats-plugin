/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcBenchmarkEnum = ENUMERATION OF	(GREATERTHAN	,GREATERTHANOREQUALTO	,LESSTHAN	,LESSTHANOREQUALTO	,EQUALTO	,NOTEQUALTO	,INCLUDES	,NOTINCLUDES	,INCLUDEDIN	,NOTINCLUDEDIN);
class IFCQUERY_EXPORT IfcBenchmarkEnum : virtual public BuildingObject
{
public:
	enum IfcBenchmarkEnumEnum
	{
		ENUM_GREATERTHAN,
		ENUM_GREATERTHANOREQUALTO,
		ENUM_LESSTHAN,
		ENUM_LESSTHANOREQUALTO,
		ENUM_EQUALTO,
		ENUM_NOTEQUALTO,
		ENUM_INCLUDES,
		ENUM_NOTINCLUDES,
		ENUM_INCLUDEDIN,
		ENUM_NOTINCLUDEDIN
	};

	IfcBenchmarkEnum() = default;
	IfcBenchmarkEnum( IfcBenchmarkEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcBenchmarkEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcBenchmarkEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcBenchmarkEnumEnum m_enum;
};

