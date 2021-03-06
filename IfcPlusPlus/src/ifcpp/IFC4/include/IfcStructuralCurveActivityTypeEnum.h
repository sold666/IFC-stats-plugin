/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcStructuralCurveActivityTypeEnum = ENUMERATION OF	(CONST	,LINEAR	,POLYGONAL	,EQUIDISTANT	,SINUS	,PARABOLA	,DISCRETE	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcStructuralCurveActivityTypeEnum : virtual public BuildingObject
{
public:
	enum IfcStructuralCurveActivityTypeEnumEnum
	{
		ENUM_CONST,
		ENUM_LINEAR,
		ENUM_POLYGONAL,
		ENUM_EQUIDISTANT,
		ENUM_SINUS,
		ENUM_PARABOLA,
		ENUM_DISCRETE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcStructuralCurveActivityTypeEnum() = default;
	IfcStructuralCurveActivityTypeEnum( IfcStructuralCurveActivityTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcStructuralCurveActivityTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcStructuralCurveActivityTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcStructuralCurveActivityTypeEnumEnum m_enum;
};

