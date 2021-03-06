/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcActorSelect.h"
#include "ifcpp/IFC4/include/IfcAsset.h"
#include "ifcpp/IFC4/include/IfcCostValue.h"
#include "ifcpp/IFC4/include/IfcDate.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPerson.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToGroup.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcAsset 
IfcAsset::IfcAsset( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcAsset::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAsset> copy_self( new IfcAsset() );
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
	if( m_Identification ) { copy_self->m_Identification = dynamic_pointer_cast<IfcIdentifier>( m_Identification->getDeepCopy(options) ); }
	if( m_OriginalValue ) { copy_self->m_OriginalValue = dynamic_pointer_cast<IfcCostValue>( m_OriginalValue->getDeepCopy(options) ); }
	if( m_CurrentValue ) { copy_self->m_CurrentValue = dynamic_pointer_cast<IfcCostValue>( m_CurrentValue->getDeepCopy(options) ); }
	if( m_TotalReplacementCost ) { copy_self->m_TotalReplacementCost = dynamic_pointer_cast<IfcCostValue>( m_TotalReplacementCost->getDeepCopy(options) ); }
	if( m_Owner ) { copy_self->m_Owner = dynamic_pointer_cast<IfcActorSelect>( m_Owner->getDeepCopy(options) ); }
	if( m_User ) { copy_self->m_User = dynamic_pointer_cast<IfcActorSelect>( m_User->getDeepCopy(options) ); }
	if( m_ResponsiblePerson ) { copy_self->m_ResponsiblePerson = dynamic_pointer_cast<IfcPerson>( m_ResponsiblePerson->getDeepCopy(options) ); }
	if( m_IncorporationDate ) { copy_self->m_IncorporationDate = dynamic_pointer_cast<IfcDate>( m_IncorporationDate->getDeepCopy(options) ); }
	if( m_DepreciatedValue ) { copy_self->m_DepreciatedValue = dynamic_pointer_cast<IfcCostValue>( m_DepreciatedValue->getDeepCopy(options) ); }
	return copy_self;
}
void IfcAsset::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCASSET" << "(";
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
	if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OriginalValue ) { stream << "#" << m_OriginalValue->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_CurrentValue ) { stream << "#" << m_CurrentValue->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_TotalReplacementCost ) { stream << "#" << m_TotalReplacementCost->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Owner ) { m_Owner->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_User ) { m_User->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_ResponsiblePerson ) { stream << "#" << m_ResponsiblePerson->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_IncorporationDate ) { m_IncorporationDate->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_DepreciatedValue ) { stream << "#" << m_DepreciatedValue->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcAsset::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcAsset::toString() const { return L"IfcAsset"; }
void IfcAsset::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 14 ){ std::stringstream err; err << "Wrong parameter count for entity IfcAsset, expecting 14, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	m_Identification = IfcIdentifier::createObjectFromSTEP( args[5], map );
	readEntityReference( args[6], m_OriginalValue, map );
	readEntityReference( args[7], m_CurrentValue, map );
	readEntityReference( args[8], m_TotalReplacementCost, map );
	m_Owner = IfcActorSelect::createObjectFromSTEP( args[9], map );
	m_User = IfcActorSelect::createObjectFromSTEP( args[10], map );
	readEntityReference( args[11], m_ResponsiblePerson, map );
	m_IncorporationDate = IfcDate::createObjectFromSTEP( args[12], map );
	readEntityReference( args[13], m_DepreciatedValue, map );
}
void IfcAsset::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcGroup::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Identification", m_Identification ) );
	vec_attributes.emplace_back( std::make_pair( "OriginalValue", m_OriginalValue ) );
	vec_attributes.emplace_back( std::make_pair( "CurrentValue", m_CurrentValue ) );
	vec_attributes.emplace_back( std::make_pair( "TotalReplacementCost", m_TotalReplacementCost ) );
	vec_attributes.emplace_back( std::make_pair( "Owner", m_Owner ) );
	vec_attributes.emplace_back( std::make_pair( "User", m_User ) );
	vec_attributes.emplace_back( std::make_pair( "ResponsiblePerson", m_ResponsiblePerson ) );
	vec_attributes.emplace_back( std::make_pair( "IncorporationDate", m_IncorporationDate ) );
	vec_attributes.emplace_back( std::make_pair( "DepreciatedValue", m_DepreciatedValue ) );
}
void IfcAsset::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcGroup::getAttributesInverse( vec_attributes_inverse );
}
void IfcAsset::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGroup::setInverseCounterparts( ptr_self_entity );
}
void IfcAsset::unlinkFromInverseCounterparts()
{
	IfcGroup::unlinkFromInverseCounterparts();
}
