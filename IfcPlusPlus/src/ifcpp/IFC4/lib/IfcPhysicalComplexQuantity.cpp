/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcPhysicalComplexQuantity.h"
#include "ifcpp/IFC4/include/IfcPhysicalQuantity.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcPhysicalComplexQuantity 
IfcPhysicalComplexQuantity::IfcPhysicalComplexQuantity( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcPhysicalComplexQuantity::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPhysicalComplexQuantity> copy_self( new IfcPhysicalComplexQuantity() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_HasQuantities.size(); ++ii )
	{
		auto item_ii = m_HasQuantities[ii];
		if( item_ii )
		{
			copy_self->m_HasQuantities.emplace_back( dynamic_pointer_cast<IfcPhysicalQuantity>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_Discrimination ) { copy_self->m_Discrimination = dynamic_pointer_cast<IfcLabel>( m_Discrimination->getDeepCopy(options) ); }
	if( m_Quality ) { copy_self->m_Quality = dynamic_pointer_cast<IfcLabel>( m_Quality->getDeepCopy(options) ); }
	if( m_Usage ) { copy_self->m_Usage = dynamic_pointer_cast<IfcLabel>( m_Usage->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPhysicalComplexQuantity::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPHYSICALCOMPLEXQUANTITY" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_HasQuantities );
	stream << ",";
	if( m_Discrimination ) { m_Discrimination->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Quality ) { m_Quality->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Usage ) { m_Usage->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcPhysicalComplexQuantity::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPhysicalComplexQuantity::toString() const { return L"IfcPhysicalComplexQuantity"; }
void IfcPhysicalComplexQuantity::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPhysicalComplexQuantity, expecting 6, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readEntityReferenceList( args[2], m_HasQuantities, map );
	m_Discrimination = IfcLabel::createObjectFromSTEP( args[3], map );
	m_Quality = IfcLabel::createObjectFromSTEP( args[4], map );
	m_Usage = IfcLabel::createObjectFromSTEP( args[5], map );
}
void IfcPhysicalComplexQuantity::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPhysicalQuantity::getAttributes( vec_attributes );
	if( !m_HasQuantities.empty() )
	{
		shared_ptr<AttributeObjectVector> HasQuantities_vec_object( new AttributeObjectVector() );
		std::copy( m_HasQuantities.begin(), m_HasQuantities.end(), std::back_inserter( HasQuantities_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "HasQuantities", HasQuantities_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "Discrimination", m_Discrimination ) );
	vec_attributes.emplace_back( std::make_pair( "Quality", m_Quality ) );
	vec_attributes.emplace_back( std::make_pair( "Usage", m_Usage ) );
}
void IfcPhysicalComplexQuantity::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPhysicalQuantity::getAttributesInverse( vec_attributes_inverse );
}
void IfcPhysicalComplexQuantity::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPhysicalQuantity::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcPhysicalComplexQuantity> ptr_self = dynamic_pointer_cast<IfcPhysicalComplexQuantity>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcPhysicalComplexQuantity::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_HasQuantities.size(); ++i )
	{
		if( m_HasQuantities[i] )
		{
			m_HasQuantities[i]->m_PartOfComplex_inverse.emplace_back( ptr_self );
		}
	}
}
void IfcPhysicalComplexQuantity::unlinkFromInverseCounterparts()
{
	IfcPhysicalQuantity::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_HasQuantities.size(); ++i )
	{
		if( m_HasQuantities[i] )
		{
			std::vector<weak_ptr<IfcPhysicalComplexQuantity> >& PartOfComplex_inverse = m_HasQuantities[i]->m_PartOfComplex_inverse;
			for( auto it_PartOfComplex_inverse = PartOfComplex_inverse.begin(); it_PartOfComplex_inverse != PartOfComplex_inverse.end(); )
			{
				weak_ptr<IfcPhysicalComplexQuantity> self_candidate_weak = *it_PartOfComplex_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_PartOfComplex_inverse;
					continue;
				}
				shared_ptr<IfcPhysicalComplexQuantity> self_candidate( *it_PartOfComplex_inverse );
				if( self_candidate.get() == this )
				{
					it_PartOfComplex_inverse= PartOfComplex_inverse.erase( it_PartOfComplex_inverse );
				}
				else
				{
					++it_PartOfComplex_inverse;
				}
			}
		}
	}
}
