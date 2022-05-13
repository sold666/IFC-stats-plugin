/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcMaterial.h"
#include "ifcpp/IFC4/include/IfcMaterialRelationship.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcMaterialRelationship 
IfcMaterialRelationship::IfcMaterialRelationship( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcMaterialRelationship::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMaterialRelationship> copy_self( new IfcMaterialRelationship() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_RelatingMaterial ) { copy_self->m_RelatingMaterial = dynamic_pointer_cast<IfcMaterial>( m_RelatingMaterial->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_RelatedMaterials.size(); ++ii )
	{
		auto item_ii = m_RelatedMaterials[ii];
		if( item_ii )
		{
			copy_self->m_RelatedMaterials.emplace_back( dynamic_pointer_cast<IfcMaterial>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_Expression ) { copy_self->m_Expression = dynamic_pointer_cast<IfcLabel>( m_Expression->getDeepCopy(options) ); }
	return copy_self;
}
void IfcMaterialRelationship::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCMATERIALRELATIONSHIP" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingMaterial ) { stream << "#" << m_RelatingMaterial->m_entity_id; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RelatedMaterials );
	stream << ",";
	if( m_Expression ) { m_Expression->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcMaterialRelationship::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcMaterialRelationship::toString() const { return L"IfcMaterialRelationship"; }
void IfcMaterialRelationship::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMaterialRelationship, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_RelatingMaterial, map );
	readEntityReferenceList( args[3], m_RelatedMaterials, map );
	m_Expression = IfcLabel::createObjectFromSTEP( args[4], map );
}
void IfcMaterialRelationship::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcResourceLevelRelationship::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingMaterial", m_RelatingMaterial ) );
	if( !m_RelatedMaterials.empty() )
	{
		shared_ptr<AttributeObjectVector> RelatedMaterials_vec_object( new AttributeObjectVector() );
		std::copy( m_RelatedMaterials.begin(), m_RelatedMaterials.end(), std::back_inserter( RelatedMaterials_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "RelatedMaterials", RelatedMaterials_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "Expression", m_Expression ) );
}
void IfcMaterialRelationship::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcResourceLevelRelationship::getAttributesInverse( vec_attributes_inverse );
}
void IfcMaterialRelationship::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcResourceLevelRelationship::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcMaterialRelationship> ptr_self = dynamic_pointer_cast<IfcMaterialRelationship>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcMaterialRelationship::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedMaterials.size(); ++i )
	{
		if( m_RelatedMaterials[i] )
		{
			m_RelatedMaterials[i]->m_IsRelatedWith_inverse.emplace_back( ptr_self );
		}
	}
	if( m_RelatingMaterial )
	{
		m_RelatingMaterial->m_RelatesTo_inverse.emplace_back( ptr_self );
	}
}
void IfcMaterialRelationship::unlinkFromInverseCounterparts()
{
	IfcResourceLevelRelationship::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedMaterials.size(); ++i )
	{
		if( m_RelatedMaterials[i] )
		{
			std::vector<weak_ptr<IfcMaterialRelationship> >& IsRelatedWith_inverse = m_RelatedMaterials[i]->m_IsRelatedWith_inverse;
			for( auto it_IsRelatedWith_inverse = IsRelatedWith_inverse.begin(); it_IsRelatedWith_inverse != IsRelatedWith_inverse.end(); )
			{
				weak_ptr<IfcMaterialRelationship> self_candidate_weak = *it_IsRelatedWith_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_IsRelatedWith_inverse;
					continue;
				}
				shared_ptr<IfcMaterialRelationship> self_candidate( *it_IsRelatedWith_inverse );
				if( self_candidate.get() == this )
				{
					it_IsRelatedWith_inverse= IsRelatedWith_inverse.erase( it_IsRelatedWith_inverse );
				}
				else
				{
					++it_IsRelatedWith_inverse;
				}
			}
		}
	}
	if( m_RelatingMaterial )
	{
		std::vector<weak_ptr<IfcMaterialRelationship> >& RelatesTo_inverse = m_RelatingMaterial->m_RelatesTo_inverse;
		for( auto it_RelatesTo_inverse = RelatesTo_inverse.begin(); it_RelatesTo_inverse != RelatesTo_inverse.end(); )
		{
			weak_ptr<IfcMaterialRelationship> self_candidate_weak = *it_RelatesTo_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_RelatesTo_inverse;
				continue;
			}
			shared_ptr<IfcMaterialRelationship> self_candidate( *it_RelatesTo_inverse );
			if( self_candidate.get() == this )
			{
				it_RelatesTo_inverse= RelatesTo_inverse.erase( it_RelatesTo_inverse );
			}
			else
			{
				++it_RelatesTo_inverse;
			}
		}
	}
}
