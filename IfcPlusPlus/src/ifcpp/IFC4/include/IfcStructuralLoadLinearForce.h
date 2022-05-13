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
class IFCQUERY_EXPORT IfcLinearForceMeasure;
class IFCQUERY_EXPORT IfcLinearMomentMeasure;
//ENTITY
class IFCQUERY_EXPORT IfcStructuralLoadLinearForce : public IfcStructuralLoadStatic
{ 
public:
	IfcStructuralLoadLinearForce() = default;
	IfcStructuralLoadLinearForce( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 7; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcStructuralLoadLinearForce"; }
	virtual const std::wstring toString() const;


	// IfcStructuralLoad -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>				m_Name;						//optional

	// IfcStructuralLoadOrResult -----------------------------------------------------------

	// IfcStructuralLoadStatic -----------------------------------------------------------

	// IfcStructuralLoadLinearForce -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcLinearForceMeasure>	m_LinearForceX;				//optional
	shared_ptr<IfcLinearForceMeasure>	m_LinearForceY;				//optional
	shared_ptr<IfcLinearForceMeasure>	m_LinearForceZ;				//optional
	shared_ptr<IfcLinearMomentMeasure>	m_LinearMomentX;			//optional
	shared_ptr<IfcLinearMomentMeasure>	m_LinearMomentY;			//optional
	shared_ptr<IfcLinearMomentMeasure>	m_LinearMomentZ;			//optional
};

