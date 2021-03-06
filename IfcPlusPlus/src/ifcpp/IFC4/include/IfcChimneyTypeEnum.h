/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcChimneyTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcChimneyTypeEnum : virtual public BuildingObject
{
public:
	enum IfcChimneyTypeEnumEnum
	{
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcChimneyTypeEnum() = default;
	IfcChimneyTypeEnum( IfcChimneyTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcChimneyTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcChimneyTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcChimneyTypeEnumEnum m_enum;
};

