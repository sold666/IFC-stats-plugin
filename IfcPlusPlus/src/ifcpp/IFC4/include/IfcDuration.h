/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSimpleValue.h"
#include "IfcTimeOrRatioSelect.h"

// TYPE IfcDuration = STRING;
class IFCQUERY_EXPORT IfcDuration : public IfcSimpleValue, public IfcTimeOrRatioSelect
{
public:
	IfcDuration() = default;
	IfcDuration( std::wstring value );
	virtual const char* className() const { return "IfcDuration"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcDuration> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	std::wstring m_value;
};

