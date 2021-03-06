/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcCableCarrierFittingTypeEnum = ENUMERATION OF	(BEND	,CROSS	,REDUCER	,TEE	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcCableCarrierFittingTypeEnum : virtual public BuildingObject
{
public:
	enum IfcCableCarrierFittingTypeEnumEnum
	{
		ENUM_BEND,
		ENUM_CROSS,
		ENUM_REDUCER,
		ENUM_TEE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcCableCarrierFittingTypeEnum() = default;
	IfcCableCarrierFittingTypeEnum( IfcCableCarrierFittingTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcCableCarrierFittingTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcCableCarrierFittingTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcCableCarrierFittingTypeEnumEnum m_enum;
};

