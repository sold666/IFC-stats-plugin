/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcCurveFontOrScaledCurveFontSelect.h"
#include "IfcPresentationItem.h"
class IFCQUERY_EXPORT IfcLabel;
class IFCQUERY_EXPORT IfcCurveStyleFontSelect;
class IFCQUERY_EXPORT IfcPositiveRatioMeasure;
//ENTITY
class IFCQUERY_EXPORT IfcCurveStyleFontAndScaling : virtual public IfcCurveFontOrScaledCurveFontSelect, public IfcPresentationItem
{ 
public:
	IfcCurveStyleFontAndScaling() = default;
	IfcCurveStyleFontAndScaling( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 3; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcCurveStyleFontAndScaling"; }
	virtual const std::wstring toString() const;


	// IfcPresentationItem -----------------------------------------------------------

	// IfcCurveStyleFontAndScaling -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcLabel>				m_Name;						//optional
	shared_ptr<IfcCurveStyleFontSelect>	m_CurveFont;
	shared_ptr<IfcPositiveRatioMeasure>	m_CurveFontScaling;
};

