/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcActorSelect.h"
#include "ifcpp/IFC4/include/IfcApproval.h"
#include "ifcpp/IFC4/include/IfcApprovalRelationship.h"
#include "ifcpp/IFC4/include/IfcDateTime.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcRelAssociatesApproval.h"
#include "ifcpp/IFC4/include/IfcResourceApprovalRelationship.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcApproval 
IfcApproval::IfcApproval( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcApproval::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcApproval> copy_self( new IfcApproval() );
	if( m_Identifier ) { copy_self->m_Identifier = dynamic_pointer_cast<IfcIdentifier>( m_Identifier->getDeepCopy(options) ); }
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_TimeOfApproval ) { copy_self->m_TimeOfApproval = dynamic_pointer_cast<IfcDateTime>( m_TimeOfApproval->getDeepCopy(options) ); }
	if( m_Status ) { copy_self->m_Status = dynamic_pointer_cast<IfcLabel>( m_Status->getDeepCopy(options) ); }
	if( m_Level ) { copy_self->m_Level = dynamic_pointer_cast<IfcLabel>( m_Level->getDeepCopy(options) ); }
	if( m_Qualifier ) { copy_self->m_Qualifier = dynamic_pointer_cast<IfcText>( m_Qualifier->getDeepCopy(options) ); }
	if( m_RequestingApproval ) { copy_self->m_RequestingApproval = dynamic_pointer_cast<IfcActorSelect>( m_RequestingApproval->getDeepCopy(options) ); }
	if( m_GivingApproval ) { copy_self->m_GivingApproval = dynamic_pointer_cast<IfcActorSelect>( m_GivingApproval->getDeepCopy(options) ); }
	return copy_self;
}
void IfcApproval::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCAPPROVAL" << "(";
	if( m_Identifier ) { m_Identifier->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TimeOfApproval ) { m_TimeOfApproval->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Status ) { m_Status->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Level ) { m_Level->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Qualifier ) { m_Qualifier->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RequestingApproval ) { m_RequestingApproval->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_GivingApproval ) { m_GivingApproval->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcApproval::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcApproval::toString() const { return L"IfcApproval"; }
void IfcApproval::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcApproval, expecting 9, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Identifier = IfcIdentifier::createObjectFromSTEP( args[0], map );
	m_Name = IfcLabel::createObjectFromSTEP( args[1], map );
	m_Description = IfcText::createObjectFromSTEP( args[2], map );
	m_TimeOfApproval = IfcDateTime::createObjectFromSTEP( args[3], map );
	m_Status = IfcLabel::createObjectFromSTEP( args[4], map );
	m_Level = IfcLabel::createObjectFromSTEP( args[5], map );
	m_Qualifier = IfcText::createObjectFromSTEP( args[6], map );
	m_RequestingApproval = IfcActorSelect::createObjectFromSTEP( args[7], map );
	m_GivingApproval = IfcActorSelect::createObjectFromSTEP( args[8], map );
}
void IfcApproval::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "Identifier", m_Identifier ) );
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.emplace_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.emplace_back( std::make_pair( "TimeOfApproval", m_TimeOfApproval ) );
	vec_attributes.emplace_back( std::make_pair( "Status", m_Status ) );
	vec_attributes.emplace_back( std::make_pair( "Level", m_Level ) );
	vec_attributes.emplace_back( std::make_pair( "Qualifier", m_Qualifier ) );
	vec_attributes.emplace_back( std::make_pair( "RequestingApproval", m_RequestingApproval ) );
	vec_attributes.emplace_back( std::make_pair( "GivingApproval", m_GivingApproval ) );
}
void IfcApproval::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	if( !m_HasExternalReferences_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> HasExternalReferences_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasExternalReferences_inverse.size(); ++i )
		{
			if( !m_HasExternalReferences_inverse[i].expired() )
			{
				HasExternalReferences_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcExternalReferenceRelationship>( m_HasExternalReferences_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "HasExternalReferences_inverse", HasExternalReferences_inverse_vec_obj ) );
	}
	if( !m_ApprovedObjects_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ApprovedObjects_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ApprovedObjects_inverse.size(); ++i )
		{
			if( !m_ApprovedObjects_inverse[i].expired() )
			{
				ApprovedObjects_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelAssociatesApproval>( m_ApprovedObjects_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ApprovedObjects_inverse", ApprovedObjects_inverse_vec_obj ) );
	}
	if( !m_ApprovedResources_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ApprovedResources_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ApprovedResources_inverse.size(); ++i )
		{
			if( !m_ApprovedResources_inverse[i].expired() )
			{
				ApprovedResources_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcResourceApprovalRelationship>( m_ApprovedResources_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ApprovedResources_inverse", ApprovedResources_inverse_vec_obj ) );
	}
	if( !m_IsRelatedWith_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> IsRelatedWith_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_IsRelatedWith_inverse.size(); ++i )
		{
			if( !m_IsRelatedWith_inverse[i].expired() )
			{
				IsRelatedWith_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcApprovalRelationship>( m_IsRelatedWith_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "IsRelatedWith_inverse", IsRelatedWith_inverse_vec_obj ) );
	}
	if( !m_Relates_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> Relates_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_Relates_inverse.size(); ++i )
		{
			if( !m_Relates_inverse[i].expired() )
			{
				Relates_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcApprovalRelationship>( m_Relates_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "Relates_inverse", Relates_inverse_vec_obj ) );
	}
}
void IfcApproval::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcApproval::unlinkFromInverseCounterparts()
{
}
