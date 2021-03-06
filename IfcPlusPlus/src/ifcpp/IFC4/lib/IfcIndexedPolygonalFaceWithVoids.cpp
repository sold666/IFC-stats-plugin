/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcIndexedPolygonalFaceWithVoids.h"
#include "ifcpp/IFC4/include/IfcPolygonalFaceSet.h"
#include "ifcpp/IFC4/include/IfcPositiveInteger.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcIndexedPolygonalFaceWithVoids 
IfcIndexedPolygonalFaceWithVoids::IfcIndexedPolygonalFaceWithVoids( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcIndexedPolygonalFaceWithVoids::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcIndexedPolygonalFaceWithVoids> copy_self( new IfcIndexedPolygonalFaceWithVoids() );
	for( size_t ii=0; ii<m_CoordIndex.size(); ++ii )
	{
		auto item_ii = m_CoordIndex[ii];
		if( item_ii )
		{
			copy_self->m_CoordIndex.emplace_back( dynamic_pointer_cast<IfcPositiveInteger>(item_ii->getDeepCopy(options) ) );
		}
	}
	copy_self->m_InnerCoordIndices.resize( m_InnerCoordIndices.size() );
	for( size_t ii=0; ii<m_InnerCoordIndices.size(); ++ii )
	{
		std::vector<shared_ptr<IfcPositiveInteger> >& vec_ii = m_InnerCoordIndices[ii];
		std::vector<shared_ptr<IfcPositiveInteger> >& vec_ii_target = copy_self->m_InnerCoordIndices[ii];
		for( size_t jj=0; jj<vec_ii.size(); ++jj )
		{
			shared_ptr<IfcPositiveInteger>& item_jj = vec_ii[jj];
			if( item_jj )
			{
				vec_ii_target.emplace_back( dynamic_pointer_cast<IfcPositiveInteger>( item_jj->getDeepCopy(options) ) );
			}
		}
	}
	return copy_self;
}
void IfcIndexedPolygonalFaceWithVoids::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCINDEXEDPOLYGONALFACEWITHVOIDS" << "(";
	stream << "(";
	for( size_t ii = 0; ii < m_CoordIndex.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcPositiveInteger>& type_object = m_CoordIndex[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, false );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	writeTypeOfIntList2D( stream, m_InnerCoordIndices, false );
	stream << ");";
}
void IfcIndexedPolygonalFaceWithVoids::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcIndexedPolygonalFaceWithVoids::toString() const { return L"IfcIndexedPolygonalFaceWithVoids"; }
void IfcIndexedPolygonalFaceWithVoids::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcIndexedPolygonalFaceWithVoids, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readTypeOfIntegerList( args[0], m_CoordIndex );
	readTypeOfIntegerList2D( args[1], m_InnerCoordIndices );
}
void IfcIndexedPolygonalFaceWithVoids::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcIndexedPolygonalFace::getAttributes( vec_attributes );
	if( !m_InnerCoordIndices.empty() )
	{
		shared_ptr<AttributeObjectVector> outer_vector( new AttributeObjectVector() );
		vec_attributes.emplace_back( std::make_pair( "InnerCoordIndices", outer_vector ) );
		for( size_t ii=0; ii<m_InnerCoordIndices.size(); ++ii )
		{
			const std::vector<shared_ptr<IfcPositiveInteger> >& vec_ii = m_InnerCoordIndices[ii];
			shared_ptr<AttributeObjectVector> inner_vector( new AttributeObjectVector() );
			outer_vector->m_vec.push_back( inner_vector );
			std::copy(vec_ii.begin(), vec_ii.end(), std::back_inserter(inner_vector->m_vec));
		}
	}
}
void IfcIndexedPolygonalFaceWithVoids::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcIndexedPolygonalFace::getAttributesInverse( vec_attributes_inverse );
}
void IfcIndexedPolygonalFaceWithVoids::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcIndexedPolygonalFace::setInverseCounterparts( ptr_self_entity );
}
void IfcIndexedPolygonalFaceWithVoids::unlinkFromInverseCounterparts()
{
	IfcIndexedPolygonalFace::unlinkFromInverseCounterparts();
}
