/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcInteger.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcReference.h"

// ENTITY IfcReference 
IfcReference::IfcReference( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcReference::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcReference> copy_self( new IfcReference() );
	if( m_TypeIdentifier ) { copy_self->m_TypeIdentifier = dynamic_pointer_cast<IfcIdentifier>( m_TypeIdentifier->getDeepCopy(options) ); }
	if( m_AttributeIdentifier ) { copy_self->m_AttributeIdentifier = dynamic_pointer_cast<IfcIdentifier>( m_AttributeIdentifier->getDeepCopy(options) ); }
	if( m_InstanceName ) { copy_self->m_InstanceName = dynamic_pointer_cast<IfcLabel>( m_InstanceName->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_ListPositions.size(); ++ii )
	{
		auto item_ii = m_ListPositions[ii];
		if( item_ii )
		{
			copy_self->m_ListPositions.emplace_back( dynamic_pointer_cast<IfcInteger>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_InnerReference ) { copy_self->m_InnerReference = dynamic_pointer_cast<IfcReference>( m_InnerReference->getDeepCopy(options) ); }
	return copy_self;
}
void IfcReference::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCREFERENCE" << "(";
	if( m_TypeIdentifier ) { m_TypeIdentifier->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_AttributeIdentifier ) { m_AttributeIdentifier->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_InstanceName ) { m_InstanceName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeTypeOfIntList( stream, m_ListPositions, true );
	stream << ",";
	if( m_InnerReference ) { stream << "#" << m_InnerReference->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcReference::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcReference::toString() const { return L"IfcReference"; }
void IfcReference::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcReference, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_TypeIdentifier = IfcIdentifier::createObjectFromSTEP( args[0], map );
	m_AttributeIdentifier = IfcIdentifier::createObjectFromSTEP( args[1], map );
	m_InstanceName = IfcLabel::createObjectFromSTEP( args[2], map );
	readTypeOfIntegerList( args[3], m_ListPositions );
	readEntityReference( args[4], m_InnerReference, map );
}
void IfcReference::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "TypeIdentifier", m_TypeIdentifier ) );
	vec_attributes.emplace_back( std::make_pair( "AttributeIdentifier", m_AttributeIdentifier ) );
	vec_attributes.emplace_back( std::make_pair( "InstanceName", m_InstanceName ) );
	if( !m_ListPositions.empty() )
	{
		shared_ptr<AttributeObjectVector> ListPositions_vec_object( new AttributeObjectVector() );
		std::copy( m_ListPositions.begin(), m_ListPositions.end(), std::back_inserter( ListPositions_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "ListPositions", ListPositions_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "InnerReference", m_InnerReference ) );
}
void IfcReference::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IfcReference::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcReference::unlinkFromInverseCounterparts()
{
}
