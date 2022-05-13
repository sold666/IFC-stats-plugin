/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcProfileDef.h"
#include "ifcpp/IFC4/include/IfcProfileProperties.h"
#include "ifcpp/IFC4/include/IfcProperty.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcProfileProperties 
IfcProfileProperties::IfcProfileProperties( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcProfileProperties::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcProfileProperties> copy_self( new IfcProfileProperties() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcIdentifier>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Properties.size(); ++ii )
	{
		auto item_ii = m_Properties[ii];
		if( item_ii )
		{
			copy_self->m_Properties.emplace_back( dynamic_pointer_cast<IfcProperty>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_ProfileDefinition )
	{
		if( options.shallow_copy_IfcProfileDef ) { copy_self->m_ProfileDefinition = m_ProfileDefinition; }
		else { copy_self->m_ProfileDefinition = dynamic_pointer_cast<IfcProfileDef>( m_ProfileDefinition->getDeepCopy(options) ); }
	}
	return copy_self;
}
void IfcProfileProperties::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPROFILEPROPERTIES" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Properties );
	stream << ",";
	if( m_ProfileDefinition ) { stream << "#" << m_ProfileDefinition->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcProfileProperties::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcProfileProperties::toString() const { return L"IfcProfileProperties"; }
void IfcProfileProperties::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcProfileProperties, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcIdentifier::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readEntityReferenceList( args[2], m_Properties, map );
	readEntityReference( args[3], m_ProfileDefinition, map );
}
void IfcProfileProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcExtendedProperties::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ProfileDefinition", m_ProfileDefinition ) );
}
void IfcProfileProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcExtendedProperties::getAttributesInverse( vec_attributes_inverse );
}
void IfcProfileProperties::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcExtendedProperties::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcProfileProperties> ptr_self = dynamic_pointer_cast<IfcProfileProperties>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcProfileProperties::setInverseCounterparts: type mismatch" ); }
	if( m_ProfileDefinition )
	{
		m_ProfileDefinition->m_HasProperties_inverse.emplace_back( ptr_self );
	}
}
void IfcProfileProperties::unlinkFromInverseCounterparts()
{
	IfcExtendedProperties::unlinkFromInverseCounterparts();
	if( m_ProfileDefinition )
	{
		std::vector<weak_ptr<IfcProfileProperties> >& HasProperties_inverse = m_ProfileDefinition->m_HasProperties_inverse;
		for( auto it_HasProperties_inverse = HasProperties_inverse.begin(); it_HasProperties_inverse != HasProperties_inverse.end(); )
		{
			weak_ptr<IfcProfileProperties> self_candidate_weak = *it_HasProperties_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_HasProperties_inverse;
				continue;
			}
			shared_ptr<IfcProfileProperties> self_candidate( *it_HasProperties_inverse );
			if( self_candidate.get() == this )
			{
				it_HasProperties_inverse= HasProperties_inverse.erase( it_HasProperties_inverse );
			}
			else
			{
				++it_HasProperties_inverse;
			}
		}
	}
}
