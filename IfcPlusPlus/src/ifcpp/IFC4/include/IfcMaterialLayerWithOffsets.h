/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcMaterialLayer.h"
class IFCQUERY_EXPORT IfcLayerSetDirectionEnum;
class IFCQUERY_EXPORT IfcLengthMeasure;
//ENTITY
class IFCQUERY_EXPORT IfcMaterialLayerWithOffsets : public IfcMaterialLayer
{ 
public:
	IfcMaterialLayerWithOffsets() = default;
	IfcMaterialLayerWithOffsets( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 9; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcMaterialLayerWithOffsets"; }
	virtual const std::wstring toString() const;


	// IfcMaterialDefinition -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcRelAssociatesMaterial> >			m_AssociatedTo_inverse;
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;
	//  std::vector<weak_ptr<IfcMaterialProperties> >				m_HasProperties_inverse;

	// IfcMaterialLayer -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcMaterial>										m_Material;					//optional
	//  shared_ptr<IfcNonNegativeLengthMeasure>						m_LayerThickness;
	//  shared_ptr<IfcLogical>										m_IsVentilated;				//optional
	//  shared_ptr<IfcLabel>										m_Name;						//optional
	//  shared_ptr<IfcText>											m_Description;				//optional
	//  shared_ptr<IfcLabel>										m_Category;					//optional
	//  shared_ptr<IfcInteger>										m_Priority;					//optional
	// inverse attributes:
	//  weak_ptr<IfcMaterialLayerSet>								m_ToMaterialLayerSet_inverse;

	// IfcMaterialLayerWithOffsets -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcLayerSetDirectionEnum>						m_OffsetDirection;
	std::vector<shared_ptr<IfcLengthMeasure> >					m_OffsetValues;
};

