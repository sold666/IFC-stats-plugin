/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcCartesianTransformationOperator3D.h"
class IFCQUERY_EXPORT IfcReal;
//ENTITY
class IFCQUERY_EXPORT IfcCartesianTransformationOperator3DnonUniform : public IfcCartesianTransformationOperator3D
{ 
public:
	IfcCartesianTransformationOperator3DnonUniform() = default;
	IfcCartesianTransformationOperator3DnonUniform( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 7; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcCartesianTransformationOperator3DnonUniform"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcCartesianTransformationOperator -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcDirection>								m_Axis1;					//optional
	//  shared_ptr<IfcDirection>								m_Axis2;					//optional
	//  shared_ptr<IfcCartesianPoint>							m_LocalOrigin;
	//  shared_ptr<IfcReal>										m_Scale;					//optional

	// IfcCartesianTransformationOperator3D -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcDirection>								m_Axis3;					//optional

	// IfcCartesianTransformationOperator3DnonUniform -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcReal>										m_Scale2;					//optional
	shared_ptr<IfcReal>										m_Scale3;					//optional
};
