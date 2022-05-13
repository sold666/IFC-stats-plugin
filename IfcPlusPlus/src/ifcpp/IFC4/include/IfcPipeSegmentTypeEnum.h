/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcPipeSegmentTypeEnum = ENUMERATION OF	(CULVERT	,FLEXIBLESEGMENT	,RIGIDSEGMENT	,GUTTER	,SPOOL	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcPipeSegmentTypeEnum : virtual public BuildingObject
{
public:
	enum IfcPipeSegmentTypeEnumEnum
	{
		ENUM_CULVERT,
		ENUM_FLEXIBLESEGMENT,
		ENUM_RIGIDSEGMENT,
		ENUM_GUTTER,
		ENUM_SPOOL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcPipeSegmentTypeEnum() = default;
	IfcPipeSegmentTypeEnum( IfcPipeSegmentTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcPipeSegmentTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcPipeSegmentTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcPipeSegmentTypeEnumEnum m_enum;
};

