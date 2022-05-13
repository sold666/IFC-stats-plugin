/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcContext.h"
#include "ifcpp/IFC4/include/IfcDefinitionSelect.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcObjectDefinition.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPropertyDefinition.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcRelDeclares 
IfcRelDeclares::IfcRelDeclares( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcRelDeclares::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRelDeclares> copy_self( new IfcRelDeclares() );
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
	if( m_RelatingContext ) { copy_self->m_RelatingContext = dynamic_pointer_cast<IfcContext>( m_RelatingContext->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_RelatedDefinitions.size(); ++ii )
	{
		auto item_ii = m_RelatedDefinitions[ii];
		if( item_ii )
		{
			copy_self->m_RelatedDefinitions.emplace_back( dynamic_pointer_cast<IfcDefinitionSelect>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcRelDeclares::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRELDECLARES" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingContext ) { stream << "#" << m_RelatingContext->m_entity_id; } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_RelatedDefinitions.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcDefinitionSelect>& type_object = m_RelatedDefinitions[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ");";
}
void IfcRelDeclares::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRelDeclares::toString() const { return L"IfcRelDeclares"; }
void IfcRelDeclares::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelDeclares, expecting 6, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReference( args[4], m_RelatingContext, map );
	readSelectList( args[5], m_RelatedDefinitions, map );
}
void IfcRelDeclares::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcRelationship::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingContext", m_RelatingContext ) );
	if( !m_RelatedDefinitions.empty() )
	{
		shared_ptr<AttributeObjectVector> RelatedDefinitions_vec_object( new AttributeObjectVector() );
		std::copy( m_RelatedDefinitions.begin(), m_RelatedDefinitions.end(), std::back_inserter( RelatedDefinitions_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "RelatedDefinitions", RelatedDefinitions_vec_object ) );
	}
}
void IfcRelDeclares::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcRelationship::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelDeclares::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelationship::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelDeclares> ptr_self = dynamic_pointer_cast<IfcRelDeclares>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelDeclares::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedDefinitions.size(); ++i )
	{
		shared_ptr<IfcObjectDefinition>  RelatedDefinitions_IfcObjectDefinition = dynamic_pointer_cast<IfcObjectDefinition>( m_RelatedDefinitions[i] );
		if( RelatedDefinitions_IfcObjectDefinition )
		{
			RelatedDefinitions_IfcObjectDefinition->m_HasContext_inverse.emplace_back( ptr_self );
		}
		shared_ptr<IfcPropertyDefinition>  RelatedDefinitions_IfcPropertyDefinition = dynamic_pointer_cast<IfcPropertyDefinition>( m_RelatedDefinitions[i] );
		if( RelatedDefinitions_IfcPropertyDefinition )
		{
			RelatedDefinitions_IfcPropertyDefinition->m_HasContext_inverse.emplace_back( ptr_self );
		}
	}
	if( m_RelatingContext )
	{
		m_RelatingContext->m_Declares_inverse.emplace_back( ptr_self );
	}
}
void IfcRelDeclares::unlinkFromInverseCounterparts()
{
	IfcRelationship::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedDefinitions.size(); ++i )
	{
		shared_ptr<IfcObjectDefinition>  RelatedDefinitions_IfcObjectDefinition = dynamic_pointer_cast<IfcObjectDefinition>( m_RelatedDefinitions[i] );
		if( RelatedDefinitions_IfcObjectDefinition )
		{
			std::vector<weak_ptr<IfcRelDeclares> >& HasContext_inverse = RelatedDefinitions_IfcObjectDefinition->m_HasContext_inverse;
			for( auto it_HasContext_inverse = HasContext_inverse.begin(); it_HasContext_inverse != HasContext_inverse.end(); )
			{
				weak_ptr<IfcRelDeclares> self_candidate_weak = *it_HasContext_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_HasContext_inverse;
					continue;
				}
				shared_ptr<IfcRelDeclares> self_candidate( *it_HasContext_inverse );
				if( self_candidate.get() == this )
				{
					it_HasContext_inverse= HasContext_inverse.erase( it_HasContext_inverse );
				}
				else
				{
					++it_HasContext_inverse;
				}
			}
		}
		shared_ptr<IfcPropertyDefinition>  RelatedDefinitions_IfcPropertyDefinition = dynamic_pointer_cast<IfcPropertyDefinition>( m_RelatedDefinitions[i] );
		if( RelatedDefinitions_IfcPropertyDefinition )
		{
			std::vector<weak_ptr<IfcRelDeclares> >& HasContext_inverse = RelatedDefinitions_IfcPropertyDefinition->m_HasContext_inverse;
			for( auto it_HasContext_inverse = HasContext_inverse.begin(); it_HasContext_inverse != HasContext_inverse.end(); )
			{
				weak_ptr<IfcRelDeclares> self_candidate_weak = *it_HasContext_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_HasContext_inverse;
					continue;
				}
				shared_ptr<IfcRelDeclares> self_candidate( *it_HasContext_inverse );
				if( self_candidate.get() == this )
				{
					it_HasContext_inverse= HasContext_inverse.erase( it_HasContext_inverse );
				}
				else
				{
					++it_HasContext_inverse;
				}
			}
		}
	}
	if( m_RelatingContext )
	{
		std::vector<weak_ptr<IfcRelDeclares> >& Declares_inverse = m_RelatingContext->m_Declares_inverse;
		for( auto it_Declares_inverse = Declares_inverse.begin(); it_Declares_inverse != Declares_inverse.end(); )
		{
			weak_ptr<IfcRelDeclares> self_candidate_weak = *it_Declares_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_Declares_inverse;
				continue;
			}
			shared_ptr<IfcRelDeclares> self_candidate( *it_Declares_inverse );
			if( self_candidate.get() == this )
			{
				it_Declares_inverse= Declares_inverse.erase( it_Declares_inverse );
			}
			else
			{
				++it_Declares_inverse;
			}
		}
	}
}
