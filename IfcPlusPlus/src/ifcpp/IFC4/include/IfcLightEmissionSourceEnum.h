/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcLightEmissionSourceEnum = ENUMERATION OF	(COMPACTFLUORESCENT	,FLUORESCENT	,HIGHPRESSUREMERCURY	,HIGHPRESSURESODIUM	,LIGHTEMITTINGDIODE	,LOWPRESSURESODIUM	,LOWVOLTAGEHALOGEN	,MAINVOLTAGEHALOGEN	,METALHALIDE	,TUNGSTENFILAMENT	,NOTDEFINED);
class IFCQUERY_EXPORT IfcLightEmissionSourceEnum : virtual public BuildingObject
{
public:
	enum IfcLightEmissionSourceEnumEnum
	{
		ENUM_COMPACTFLUORESCENT,
		ENUM_FLUORESCENT,
		ENUM_HIGHPRESSUREMERCURY,
		ENUM_HIGHPRESSURESODIUM,
		ENUM_LIGHTEMITTINGDIODE,
		ENUM_LOWPRESSURESODIUM,
		ENUM_LOWVOLTAGEHALOGEN,
		ENUM_MAINVOLTAGEHALOGEN,
		ENUM_METALHALIDE,
		ENUM_TUNGSTENFILAMENT,
		ENUM_NOTDEFINED
	};

	IfcLightEmissionSourceEnum() = default;
	IfcLightEmissionSourceEnum( IfcLightEmissionSourceEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcLightEmissionSourceEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcLightEmissionSourceEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcLightEmissionSourceEnumEnum m_enum;
};

