/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcDirection.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcLogical.h"
#include "ifcpp/IFC4/include/IfcOffsetCurve3D.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcOffsetCurve3D 
IfcOffsetCurve3D::IfcOffsetCurve3D( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcOffsetCurve3D::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcOffsetCurve3D> copy_self( new IfcOffsetCurve3D() );
	if( m_BasisCurve ) { copy_self->m_BasisCurve = dynamic_pointer_cast<IfcCurve>( m_BasisCurve->getDeepCopy(options) ); }
	if( m_Distance ) { copy_self->m_Distance = dynamic_pointer_cast<IfcLengthMeasure>( m_Distance->getDeepCopy(options) ); }
	if( m_SelfIntersect ) { copy_self->m_SelfIntersect = dynamic_pointer_cast<IfcLogical>( m_SelfIntersect->getDeepCopy(options) ); }
	if( m_RefDirection ) { copy_self->m_RefDirection = dynamic_pointer_cast<IfcDirection>( m_RefDirection->getDeepCopy(options) ); }
	return copy_self;
}
void IfcOffsetCurve3D::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCOFFSETCURVE3D" << "(";
	if( m_BasisCurve ) { stream << "#" << m_BasisCurve->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Distance ) { m_Distance->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SelfIntersect ) { m_SelfIntersect->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RefDirection ) { stream << "#" << m_RefDirection->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcOffsetCurve3D::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcOffsetCurve3D::toString() const { return L"IfcOffsetCurve3D"; }
void IfcOffsetCurve3D::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcOffsetCurve3D, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_BasisCurve, map );
	m_Distance = IfcLengthMeasure::createObjectFromSTEP( args[1], map );
	m_SelfIntersect = IfcLogical::createObjectFromSTEP( args[2], map );
	readEntityReference( args[3], m_RefDirection, map );
}
void IfcOffsetCurve3D::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcOffsetCurve::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Distance", m_Distance ) );
	vec_attributes.emplace_back( std::make_pair( "SelfIntersect", m_SelfIntersect ) );
	vec_attributes.emplace_back( std::make_pair( "RefDirection", m_RefDirection ) );
}
void IfcOffsetCurve3D::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcOffsetCurve::getAttributesInverse( vec_attributes_inverse );
}
void IfcOffsetCurve3D::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcOffsetCurve::setInverseCounterparts( ptr_self_entity );
}
void IfcOffsetCurve3D::unlinkFromInverseCounterparts()
{
	IfcOffsetCurve::unlinkFromInverseCounterparts();
}
