/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSchedulingTime.h"
class IFCQUERY_EXPORT IfcTimeOrRatioSelect;
class IFCQUERY_EXPORT IfcTaskDurationEnum;
//ENTITY
class IFCQUERY_EXPORT IfcLagTime : public IfcSchedulingTime
{ 
public:
	IfcLagTime() = default;
	IfcLagTime( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 5; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcLagTime"; }
	virtual const std::wstring toString() const;


	// IfcSchedulingTime -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>				m_Name;						//optional
	//  shared_ptr<IfcDataOriginEnum>		m_DataOrigin;				//optional
	//  shared_ptr<IfcLabel>				m_UserDefinedDataOrigin;	//optional

	// IfcLagTime -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcTimeOrRatioSelect>	m_LagValue;
	shared_ptr<IfcTaskDurationEnum>		m_DurationType;
};

