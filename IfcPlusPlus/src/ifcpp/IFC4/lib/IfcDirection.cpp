/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcDirection.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcReal.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcDirection 
IfcDirection::IfcDirection( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcDirection::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDirection> copy_self( new IfcDirection() );
	for( size_t ii=0; ii<m_DirectionRatios.size(); ++ii )
	{
		auto item_ii = m_DirectionRatios[ii];
		if( item_ii )
		{
			copy_self->m_DirectionRatios.emplace_back( dynamic_pointer_cast<IfcReal>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcDirection::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCDIRECTION" << "(";
	writeTypeOfRealList( stream, m_DirectionRatios, false );
	stream << ");";
}
void IfcDirection::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcDirection::toString() const { return L"IfcDirection"; }
void IfcDirection::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcDirection, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readTypeOfRealList( args[0], m_DirectionRatios );
}
void IfcDirection::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	if( !m_DirectionRatios.empty() )
	{
		shared_ptr<AttributeObjectVector> DirectionRatios_vec_object( new AttributeObjectVector() );
		std::copy( m_DirectionRatios.begin(), m_DirectionRatios.end(), std::back_inserter( DirectionRatios_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "DirectionRatios", DirectionRatios_vec_object ) );
	}
}
void IfcDirection::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcDirection::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcDirection::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
