/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcIndexedPolygonalFace.h"
class IFCQUERY_EXPORT IfcPositiveInteger;
//ENTITY
class IFCQUERY_EXPORT IfcIndexedPolygonalFaceWithVoids : public IfcIndexedPolygonalFace
{ 
public:
	IfcIndexedPolygonalFaceWithVoids() = default;
	IfcIndexedPolygonalFaceWithVoids( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 2; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcIndexedPolygonalFaceWithVoids"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcTessellatedItem -----------------------------------------------------------

	// IfcIndexedPolygonalFace -----------------------------------------------------------
	// attributes:
	//  std::vector<shared_ptr<IfcPositiveInteger> >			m_CoordIndex;
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPolygonalFaceSet> >				m_ToFaceSet_inverse;

	// IfcIndexedPolygonalFaceWithVoids -----------------------------------------------------------
	// attributes:
	std::vector<std::vector<shared_ptr<IfcPositiveInteger> > >	m_InnerCoordIndices;
};

