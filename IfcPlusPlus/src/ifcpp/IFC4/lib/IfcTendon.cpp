/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAreaMeasure.h"
#include "ifcpp/IFC4/include/IfcForceMeasure.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcNormalisedRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPressureMeasure.h"
#include "ifcpp/IFC4/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelConnectsElements.h"
#include "ifcpp/IFC4/include/IfcRelConnectsWithRealizingElements.h"
#include "ifcpp/IFC4/include/IfcRelContainedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcRelCoversBldgElements.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelFillsElement.h"
#include "ifcpp/IFC4/include/IfcRelInterferesElements.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcRelProjectsElement.h"
#include "ifcpp/IFC4/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcRelSpaceBoundary.h"
#include "ifcpp/IFC4/include/IfcRelVoidsElement.h"
#include "ifcpp/IFC4/include/IfcTendon.h"
#include "ifcpp/IFC4/include/IfcTendonTypeEnum.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcTendon 
IfcTendon::IfcTendon( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcTendon::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTendon> copy_self( new IfcTendon() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = make_shared<IfcGloballyUniqueId>( createBase64Uuid_wstr().data() ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_ObjectPlacement ) { copy_self->m_ObjectPlacement = dynamic_pointer_cast<IfcObjectPlacement>( m_ObjectPlacement->getDeepCopy(options) ); }
	if( m_Representation ) { copy_self->m_Representation = dynamic_pointer_cast<IfcProductRepresentation>( m_Representation->getDeepCopy(options) ); }
	if( m_Tag ) { copy_self->m_Tag = dynamic_pointer_cast<IfcIdentifier>( m_Tag->getDeepCopy(options) ); }
	if( m_SteelGrade ) { copy_self->m_SteelGrade = dynamic_pointer_cast<IfcLabel>( m_SteelGrade->getDeepCopy(options) ); }
	if( m_PredefinedType ) { copy_self->m_PredefinedType = dynamic_pointer_cast<IfcTendonTypeEnum>( m_PredefinedType->getDeepCopy(options) ); }
	if( m_NominalDiameter ) { copy_self->m_NominalDiameter = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_NominalDiameter->getDeepCopy(options) ); }
	if( m_CrossSectionArea ) { copy_self->m_CrossSectionArea = dynamic_pointer_cast<IfcAreaMeasure>( m_CrossSectionArea->getDeepCopy(options) ); }
	if( m_TensionForce ) { copy_self->m_TensionForce = dynamic_pointer_cast<IfcForceMeasure>( m_TensionForce->getDeepCopy(options) ); }
	if( m_PreStress ) { copy_self->m_PreStress = dynamic_pointer_cast<IfcPressureMeasure>( m_PreStress->getDeepCopy(options) ); }
	if( m_FrictionCoefficient ) { copy_self->m_FrictionCoefficient = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_FrictionCoefficient->getDeepCopy(options) ); }
	if( m_AnchorageSlip ) { copy_self->m_AnchorageSlip = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_AnchorageSlip->getDeepCopy(options) ); }
	if( m_MinCurvatureRadius ) { copy_self->m_MinCurvatureRadius = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_MinCurvatureRadius->getDeepCopy(options) ); }
	return copy_self;
}
void IfcTendon::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTENDON" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Tag ) { m_Tag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SteelGrade ) { m_SteelGrade->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_NominalDiameter ) { m_NominalDiameter->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_CrossSectionArea ) { m_CrossSectionArea->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TensionForce ) { m_TensionForce->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PreStress ) { m_PreStress->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FrictionCoefficient ) { m_FrictionCoefficient->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_AnchorageSlip ) { m_AnchorageSlip->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MinCurvatureRadius ) { m_MinCurvatureRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcTendon::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTendon::toString() const { return L"IfcTendon"; }
void IfcTendon::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 17 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTendon, expecting 17, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_ObjectPlacement, map );
	readEntityReference( args[6], m_Representation, map );
	m_Tag = IfcIdentifier::createObjectFromSTEP( args[7], map );
	m_SteelGrade = IfcLabel::createObjectFromSTEP( args[8], map );
	m_PredefinedType = IfcTendonTypeEnum::createObjectFromSTEP( args[9], map );
	m_NominalDiameter = IfcPositiveLengthMeasure::createObjectFromSTEP( args[10], map );
	m_CrossSectionArea = IfcAreaMeasure::createObjectFromSTEP( args[11], map );
	m_TensionForce = IfcForceMeasure::createObjectFromSTEP( args[12], map );
	m_PreStress = IfcPressureMeasure::createObjectFromSTEP( args[13], map );
	m_FrictionCoefficient = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[14], map );
	m_AnchorageSlip = IfcPositiveLengthMeasure::createObjectFromSTEP( args[15], map );
	m_MinCurvatureRadius = IfcPositiveLengthMeasure::createObjectFromSTEP( args[16], map );
}
void IfcTendon::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcReinforcingElement::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
	vec_attributes.emplace_back( std::make_pair( "NominalDiameter", m_NominalDiameter ) );
	vec_attributes.emplace_back( std::make_pair( "CrossSectionArea", m_CrossSectionArea ) );
	vec_attributes.emplace_back( std::make_pair( "TensionForce", m_TensionForce ) );
	vec_attributes.emplace_back( std::make_pair( "PreStress", m_PreStress ) );
	vec_attributes.emplace_back( std::make_pair( "FrictionCoefficient", m_FrictionCoefficient ) );
	vec_attributes.emplace_back( std::make_pair( "AnchorageSlip", m_AnchorageSlip ) );
	vec_attributes.emplace_back( std::make_pair( "MinCurvatureRadius", m_MinCurvatureRadius ) );
}
void IfcTendon::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcReinforcingElement::getAttributesInverse( vec_attributes_inverse );
}
void IfcTendon::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcReinforcingElement::setInverseCounterparts( ptr_self_entity );
}
void IfcTendon::unlinkFromInverseCounterparts()
{
	IfcReinforcingElement::unlinkFromInverseCounterparts();
}
