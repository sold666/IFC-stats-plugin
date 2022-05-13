/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcAddressTypeEnum = ENUMERATION OF	(OFFICE	,SITE	,HOME	,DISTRIBUTIONPOINT	,USERDEFINED);
class IFCQUERY_EXPORT IfcAddressTypeEnum : virtual public BuildingObject
{
public:
	enum IfcAddressTypeEnumEnum
	{
		ENUM_OFFICE,
		ENUM_SITE,
		ENUM_HOME,
		ENUM_DISTRIBUTIONPOINT,
		ENUM_USERDEFINED
	};

	IfcAddressTypeEnum() = default;
	IfcAddressTypeEnum( IfcAddressTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcAddressTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcAddressTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcAddressTypeEnumEnum m_enum;
};

