/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPresentationStyleSelect.h"
#include "IfcPresentationStyle.h"
class IFCQUERY_EXPORT IfcFillStyleSelect;
class IFCQUERY_EXPORT IfcBoolean;
//ENTITY
class IFCQUERY_EXPORT IfcFillAreaStyle : virtual public IfcPresentationStyleSelect, public IfcPresentationStyle
{ 
public:
	IfcFillAreaStyle() = default;
	IfcFillAreaStyle( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 3; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcFillAreaStyle"; }
	virtual const std::wstring toString() const;


	// IfcPresentationStyle -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>							m_Name;						//optional

	// IfcFillAreaStyle -----------------------------------------------------------
	// attributes:
	std::vector<shared_ptr<IfcFillStyleSelect> >	m_FillStyles;
	shared_ptr<IfcBoolean>							m_ModelorDraughting;		//optional
};

