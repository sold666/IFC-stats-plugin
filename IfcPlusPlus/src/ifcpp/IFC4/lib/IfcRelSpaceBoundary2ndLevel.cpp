/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcConnectionGeometry.h"
#include "ifcpp/IFC4/include/IfcElement.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcInternalOrExternalEnum.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPhysicalOrVirtualEnum.h"
#include "ifcpp/IFC4/include/IfcRelSpaceBoundary1stLevel.h"
#include "ifcpp/IFC4/include/IfcRelSpaceBoundary2ndLevel.h"
#include "ifcpp/IFC4/include/IfcSpaceBoundarySelect.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcRelSpaceBoundary2ndLevel 
IfcRelSpaceBoundary2ndLevel::IfcRelSpaceBoundary2ndLevel( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcRelSpaceBoundary2ndLevel::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRelSpaceBoundary2ndLevel> copy_self( new IfcRelSpaceBoundary2ndLevel() );
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
	if( m_RelatingSpace ) { copy_self->m_RelatingSpace = dynamic_pointer_cast<IfcSpaceBoundarySelect>( m_RelatingSpace->getDeepCopy(options) ); }
	if( m_RelatedBuildingElement ) { copy_self->m_RelatedBuildingElement = dynamic_pointer_cast<IfcElement>( m_RelatedBuildingElement->getDeepCopy(options) ); }
	if( m_ConnectionGeometry ) { copy_self->m_ConnectionGeometry = dynamic_pointer_cast<IfcConnectionGeometry>( m_ConnectionGeometry->getDeepCopy(options) ); }
	if( m_PhysicalOrVirtualBoundary ) { copy_self->m_PhysicalOrVirtualBoundary = dynamic_pointer_cast<IfcPhysicalOrVirtualEnum>( m_PhysicalOrVirtualBoundary->getDeepCopy(options) ); }
	if( m_InternalOrExternalBoundary ) { copy_self->m_InternalOrExternalBoundary = dynamic_pointer_cast<IfcInternalOrExternalEnum>( m_InternalOrExternalBoundary->getDeepCopy(options) ); }
	if( m_ParentBoundary ) { copy_self->m_ParentBoundary = dynamic_pointer_cast<IfcRelSpaceBoundary1stLevel>( m_ParentBoundary->getDeepCopy(options) ); }
	if( m_CorrespondingBoundary ) { copy_self->m_CorrespondingBoundary = dynamic_pointer_cast<IfcRelSpaceBoundary2ndLevel>( m_CorrespondingBoundary->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRelSpaceBoundary2ndLevel::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRELSPACEBOUNDARY2NDLEVEL" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingSpace ) { m_RelatingSpace->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_RelatedBuildingElement ) { stream << "#" << m_RelatedBuildingElement->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_ConnectionGeometry ) { stream << "#" << m_ConnectionGeometry->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_PhysicalOrVirtualBoundary ) { m_PhysicalOrVirtualBoundary->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_InternalOrExternalBoundary ) { m_InternalOrExternalBoundary->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ParentBoundary ) { stream << "#" << m_ParentBoundary->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_CorrespondingBoundary ) { stream << "#" << m_CorrespondingBoundary->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcRelSpaceBoundary2ndLevel::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRelSpaceBoundary2ndLevel::toString() const { return L"IfcRelSpaceBoundary2ndLevel"; }
void IfcRelSpaceBoundary2ndLevel::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 11 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelSpaceBoundary2ndLevel, expecting 11, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_RelatingSpace = IfcSpaceBoundarySelect::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_RelatedBuildingElement, map );
	readEntityReference( args[6], m_ConnectionGeometry, map );
	m_PhysicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum::createObjectFromSTEP( args[7], map );
	m_InternalOrExternalBoundary = IfcInternalOrExternalEnum::createObjectFromSTEP( args[8], map );
	readEntityReference( args[9], m_ParentBoundary, map );
	readEntityReference( args[10], m_CorrespondingBoundary, map );
}
void IfcRelSpaceBoundary2ndLevel::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcRelSpaceBoundary1stLevel::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "CorrespondingBoundary", m_CorrespondingBoundary ) );
}
void IfcRelSpaceBoundary2ndLevel::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcRelSpaceBoundary1stLevel::getAttributesInverse( vec_attributes_inverse );
	if( !m_Corresponds_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> Corresponds_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_Corresponds_inverse.size(); ++i )
		{
			if( !m_Corresponds_inverse[i].expired() )
			{
				Corresponds_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelSpaceBoundary2ndLevel>( m_Corresponds_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "Corresponds_inverse", Corresponds_inverse_vec_obj ) );
	}
}
void IfcRelSpaceBoundary2ndLevel::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelSpaceBoundary1stLevel::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelSpaceBoundary2ndLevel> ptr_self = dynamic_pointer_cast<IfcRelSpaceBoundary2ndLevel>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelSpaceBoundary2ndLevel::setInverseCounterparts: type mismatch" ); }
	if( m_CorrespondingBoundary )
	{
		m_CorrespondingBoundary->m_Corresponds_inverse.emplace_back( ptr_self );
	}
}
void IfcRelSpaceBoundary2ndLevel::unlinkFromInverseCounterparts()
{
	IfcRelSpaceBoundary1stLevel::unlinkFromInverseCounterparts();
	if( m_CorrespondingBoundary )
	{
		std::vector<weak_ptr<IfcRelSpaceBoundary2ndLevel> >& Corresponds_inverse = m_CorrespondingBoundary->m_Corresponds_inverse;
		for( auto it_Corresponds_inverse = Corresponds_inverse.begin(); it_Corresponds_inverse != Corresponds_inverse.end(); )
		{
			weak_ptr<IfcRelSpaceBoundary2ndLevel> self_candidate_weak = *it_Corresponds_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_Corresponds_inverse;
				continue;
			}
			shared_ptr<IfcRelSpaceBoundary2ndLevel> self_candidate( *it_Corresponds_inverse );
			if( self_candidate.get() == this )
			{
				it_Corresponds_inverse= Corresponds_inverse.erase( it_Corresponds_inverse );
			}
			else
			{
				++it_Corresponds_inverse;
			}
		}
	}
}
