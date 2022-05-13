/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcRelConnects.h"
class IFCQUERY_EXPORT IfcProcess;
class IFCQUERY_EXPORT IfcLagTime;
class IFCQUERY_EXPORT IfcSequenceEnum;
class IFCQUERY_EXPORT IfcLabel;
//ENTITY
class IFCQUERY_EXPORT IfcRelSequence : public IfcRelConnects
{ 
public:
	IfcRelSequence() = default;
	IfcRelSequence( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 9; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcRelSequence"; }
	virtual const std::wstring toString() const;


	// IfcRoot -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcGloballyUniqueId>	m_GlobalId;
	//  shared_ptr<IfcOwnerHistory>		m_OwnerHistory;				//optional
	//  shared_ptr<IfcLabel>			m_Name;						//optional
	//  shared_ptr<IfcText>				m_Description;				//optional

	// IfcRelationship -----------------------------------------------------------

	// IfcRelConnects -----------------------------------------------------------

	// IfcRelSequence -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcProcess>			m_RelatingProcess;
	shared_ptr<IfcProcess>			m_RelatedProcess;
	shared_ptr<IfcLagTime>			m_TimeLag;					//optional
	shared_ptr<IfcSequenceEnum>		m_SequenceType;				//optional
	shared_ptr<IfcLabel>			m_UserDefinedSequenceType;	//optional
};

