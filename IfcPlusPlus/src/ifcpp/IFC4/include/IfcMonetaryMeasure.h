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

// TYPE IfcMonetaryMeasure = REAL;
class IFCQUERY_EXPORT IfcMonetaryMeasure : public IfcDerivedMeasureValue
{
public:
	IfcMonetaryMeasure() = default;
	IfcMonetaryMeasure( double value );
	virtual const char* className() const { return "IfcMonetaryMeasure"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcMonetaryMeasure> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	double m_value;
};

