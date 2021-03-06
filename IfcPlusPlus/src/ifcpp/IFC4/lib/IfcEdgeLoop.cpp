/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcEdgeLoop.h"
#include "ifcpp/IFC4/include/IfcOrientedEdge.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcEdgeLoop 
IfcEdgeLoop::IfcEdgeLoop( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcEdgeLoop::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcEdgeLoop> copy_self( new IfcEdgeLoop() );
	for( size_t ii=0; ii<m_EdgeList.size(); ++ii )
	{
		auto item_ii = m_EdgeList[ii];
		if( item_ii )
		{
			copy_self->m_EdgeList.emplace_back( dynamic_pointer_cast<IfcOrientedEdge>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcEdgeLoop::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCEDGELOOP" << "(";
	writeEntityList( stream, m_EdgeList );
	stream << ");";
}
void IfcEdgeLoop::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcEdgeLoop::toString() const { return L"IfcEdgeLoop"; }
void IfcEdgeLoop::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcEdgeLoop, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_EdgeList, map );
}
void IfcEdgeLoop::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcLoop::getAttributes( vec_attributes );
	if( !m_EdgeList.empty() )
	{
		shared_ptr<AttributeObjectVector> EdgeList_vec_object( new AttributeObjectVector() );
		std::copy( m_EdgeList.begin(), m_EdgeList.end(), std::back_inserter( EdgeList_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "EdgeList", EdgeList_vec_object ) );
	}
}
void IfcEdgeLoop::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcLoop::getAttributesInverse( vec_attributes_inverse );
}
void IfcEdgeLoop::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcLoop::setInverseCounterparts( ptr_self_entity );
}
void IfcEdgeLoop::unlinkFromInverseCounterparts()
{
	IfcLoop::unlinkFromInverseCounterparts();
}
