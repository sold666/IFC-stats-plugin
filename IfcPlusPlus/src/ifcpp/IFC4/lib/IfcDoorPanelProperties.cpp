/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcDoorPanelOperationEnum.h"
#include "ifcpp/IFC4/include/IfcDoorPanelPositionEnum.h"
#include "ifcpp/IFC4/include/IfcDoorPanelProperties.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcNormalisedRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByTemplate.h"
#include "ifcpp/IFC4/include/IfcShapeAspect.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcTypeObject.h"

// ENTITY IfcDoorPanelProperties 
IfcDoorPanelProperties::IfcDoorPanelProperties( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcDoorPanelProperties::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDoorPanelProperties> copy_self( new IfcDoorPanelProperties() );
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
	if( m_PanelDepth ) { copy_self->m_PanelDepth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_PanelDepth->getDeepCopy(options) ); }
	if( m_PanelOperation ) { copy_self->m_PanelOperation = dynamic_pointer_cast<IfcDoorPanelOperationEnum>( m_PanelOperation->getDeepCopy(options) ); }
	if( m_PanelWidth ) { copy_self->m_PanelWidth = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_PanelWidth->getDeepCopy(options) ); }
	if( m_PanelPosition ) { copy_self->m_PanelPosition = dynamic_pointer_cast<IfcDoorPanelPositionEnum>( m_PanelPosition->getDeepCopy(options) ); }
	if( m_ShapeAspectStyle ) { copy_self->m_ShapeAspectStyle = dynamic_pointer_cast<IfcShapeAspect>( m_ShapeAspectStyle->getDeepCopy(options) ); }
	return copy_self;
}
void IfcDoorPanelProperties::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCDOORPANELPROPERTIES" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PanelDepth ) { m_PanelDepth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PanelOperation ) { m_PanelOperation->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PanelWidth ) { m_PanelWidth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PanelPosition ) { m_PanelPosition->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ShapeAspectStyle ) { stream << "#" << m_ShapeAspectStyle->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcDoorPanelProperties::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcDoorPanelProperties::toString() const { return L"IfcDoorPanelProperties"; }
void IfcDoorPanelProperties::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcDoorPanelProperties, expecting 9, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_PanelDepth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map );
	m_PanelOperation = IfcDoorPanelOperationEnum::createObjectFromSTEP( args[5], map );
	m_PanelWidth = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[6], map );
	m_PanelPosition = IfcDoorPanelPositionEnum::createObjectFromSTEP( args[7], map );
	readEntityReference( args[8], m_ShapeAspectStyle, map );
}
void IfcDoorPanelProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPreDefinedPropertySet::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "PanelDepth", m_PanelDepth ) );
	vec_attributes.emplace_back( std::make_pair( "PanelOperation", m_PanelOperation ) );
	vec_attributes.emplace_back( std::make_pair( "PanelWidth", m_PanelWidth ) );
	vec_attributes.emplace_back( std::make_pair( "PanelPosition", m_PanelPosition ) );
	vec_attributes.emplace_back( std::make_pair( "ShapeAspectStyle", m_ShapeAspectStyle ) );
}
void IfcDoorPanelProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPreDefinedPropertySet::getAttributesInverse( vec_attributes_inverse );
}
void IfcDoorPanelProperties::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPreDefinedPropertySet::setInverseCounterparts( ptr_self_entity );
}
void IfcDoorPanelProperties::unlinkFromInverseCounterparts()
{
	IfcPreDefinedPropertySet::unlinkFromInverseCounterparts();
}
