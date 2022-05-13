/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcBoundaryNodeCondition.h"
class IFCQUERY_EXPORT IfcWarpingStiffnessSelect;
//ENTITY
class IFCQUERY_EXPORT IfcBoundaryNodeConditionWarping : public IfcBoundaryNodeCondition
{ 
public:
	IfcBoundaryNodeConditionWarping() = default;
	IfcBoundaryNodeConditionWarping( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 8; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcBoundaryNodeConditionWarping"; }
	virtual const std::wstring toString() const;


	// IfcBoundaryCondition -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>						m_Name;						//optional

	// IfcBoundaryNodeCondition -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcTranslationalStiffnessSelect>	m_TranslationalStiffnessX;	//optional
	//  shared_ptr<IfcTranslationalStiffnessSelect>	m_TranslationalStiffnessY;	//optional
	//  shared_ptr<IfcTranslationalStiffnessSelect>	m_TranslationalStiffnessZ;	//optional
	//  shared_ptr<IfcRotationalStiffnessSelect>	m_RotationalStiffnessX;		//optional
	//  shared_ptr<IfcRotationalStiffnessSelect>	m_RotationalStiffnessY;		//optional
	//  shared_ptr<IfcRotationalStiffnessSelect>	m_RotationalStiffnessZ;		//optional

	// IfcBoundaryNodeConditionWarping -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcWarpingStiffnessSelect>		m_WarpingStiffness;			//optional
};

