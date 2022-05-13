/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcDerivedMeasureValue.h"

// TYPE IfcIntegerCountRateMeasure = INTEGER;
class IFCQUERY_EXPORT IfcIntegerCountRateMeasure : public IfcDerivedMeasureValue
{
public:
	IfcIntegerCountRateMeasure() = default;
	IfcIntegerCountRateMeasure( int value );
	virtual const char* className() const { return "IfcIntegerCountRateMeasure"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcIntegerCountRateMeasure> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	int m_value;
};

