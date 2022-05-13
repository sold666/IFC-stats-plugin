/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcStructuralLoadStatic.h"
class IFCQUERY_EXPORT IfcForceMeasure;
class IFCQUERY_EXPORT IfcTorqueMeasure;
//ENTITY
class IFCQUERY_EXPORT IfcStructuralLoadSingleForce : public IfcStructuralLoadStatic
{ 
public:
	IfcStructuralLoadSingleForce() = default;
	IfcStructuralLoadSingleForce( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 7; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcStructuralLoadSingleForce"; }
	virtual const std::wstring toString() const;


	// IfcStructuralLoad -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>			m_Name;						//optional

	// IfcStructuralLoadOrResult -----------------------------------------------------------

	// IfcStructuralLoadStatic -----------------------------------------------------------

	// IfcStructuralLoadSingleForce -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcForceMeasure>		m_ForceX;					//optional
	shared_ptr<IfcForceMeasure>		m_ForceY;					//optional
	shared_ptr<IfcForceMeasure>		m_ForceZ;					//optional
	shared_ptr<IfcTorqueMeasure>	m_MomentX;					//optional
	shared_ptr<IfcTorqueMeasure>	m_MomentY;					//optional
	shared_ptr<IfcTorqueMeasure>	m_MomentZ;					//optional
};

