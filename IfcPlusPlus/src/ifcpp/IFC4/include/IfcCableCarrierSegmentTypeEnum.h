/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcCableCarrierSegmentTypeEnum = ENUMERATION OF	(CABLELADDERSEGMENT	,CABLETRAYSEGMENT	,CABLETRUNKINGSEGMENT	,CONDUITSEGMENT	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcCableCarrierSegmentTypeEnum : virtual public BuildingObject
{
public:
	enum IfcCableCarrierSegmentTypeEnumEnum
	{
		ENUM_CABLELADDERSEGMENT,
		ENUM_CABLETRAYSEGMENT,
		ENUM_CABLETRUNKINGSEGMENT,
		ENUM_CONDUITSEGMENT,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcCableCarrierSegmentTypeEnum() = default;
	IfcCableCarrierSegmentTypeEnum( IfcCableCarrierSegmentTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcCableCarrierSegmentTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcCableCarrierSegmentTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcCableCarrierSegmentTypeEnumEnum m_enum;
};

