/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcStructuralConnectionCondition.h"
class IFCQUERY_EXPORT IfcForceMeasure;
//ENTITY
class IFCQUERY_EXPORT IfcFailureConnectionCondition : public IfcStructuralConnectionCondition
{ 
public:
	IfcFailureConnectionCondition() = default;
	IfcFailureConnectionCondition( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 7; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcFailureConnectionCondition"; }
	virtual const std::wstring toString() const;


	// IfcStructuralConnectionCondition -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>		m_Name;						//optional

	// IfcFailureConnectionCondition -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcForceMeasure>	m_TensionFailureX;			//optional
	shared_ptr<IfcForceMeasure>	m_TensionFailureY;			//optional
	shared_ptr<IfcForceMeasure>	m_TensionFailureZ;			//optional
	shared_ptr<IfcForceMeasure>	m_CompressionFailureX;		//optional
	shared_ptr<IfcForceMeasure>	m_CompressionFailureY;		//optional
	shared_ptr<IfcForceMeasure>	m_CompressionFailureZ;		//optional
};

