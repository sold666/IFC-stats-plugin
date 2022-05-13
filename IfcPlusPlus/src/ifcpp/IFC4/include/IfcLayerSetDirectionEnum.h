/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcLayerSetDirectionEnum = ENUMERATION OF	(AXIS1	,AXIS2	,AXIS3);
class IFCQUERY_EXPORT IfcLayerSetDirectionEnum : virtual public BuildingObject
{
public:
	enum IfcLayerSetDirectionEnumEnum
	{
		ENUM_AXIS1,
		ENUM_AXIS2,
		ENUM_AXIS3
	};

	IfcLayerSetDirectionEnum() = default;
	IfcLayerSetDirectionEnum( IfcLayerSetDirectionEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcLayerSetDirectionEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcLayerSetDirectionEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcLayerSetDirectionEnumEnum m_enum;
};

