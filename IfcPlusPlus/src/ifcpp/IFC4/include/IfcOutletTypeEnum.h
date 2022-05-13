/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcOutletTypeEnum = ENUMERATION OF	(AUDIOVISUALOUTLET	,COMMUNICATIONSOUTLET	,POWEROUTLET	,DATAOUTLET	,TELEPHONEOUTLET	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcOutletTypeEnum : virtual public BuildingObject
{
public:
	enum IfcOutletTypeEnumEnum
	{
		ENUM_AUDIOVISUALOUTLET,
		ENUM_COMMUNICATIONSOUTLET,
		ENUM_POWEROUTLET,
		ENUM_DATAOUTLET,
		ENUM_TELEPHONEOUTLET,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcOutletTypeEnum() = default;
	IfcOutletTypeEnum( IfcOutletTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcOutletTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcOutletTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcOutletTypeEnumEnum m_enum;
};

