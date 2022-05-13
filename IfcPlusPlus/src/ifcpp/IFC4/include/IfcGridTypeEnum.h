/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcGridTypeEnum = ENUMERATION OF	(RECTANGULAR	,RADIAL	,TRIANGULAR	,IRREGULAR	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcGridTypeEnum : virtual public BuildingObject
{
public:
	enum IfcGridTypeEnumEnum
	{
		ENUM_RECTANGULAR,
		ENUM_RADIAL,
		ENUM_TRIANGULAR,
		ENUM_IRREGULAR,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcGridTypeEnum() = default;
	IfcGridTypeEnum( IfcGridTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcGridTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcGridTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcGridTypeEnumEnum m_enum;
};
