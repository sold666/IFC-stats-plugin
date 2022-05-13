/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcPcurve.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcSurface.h"

// ENTITY IfcPcurve 
IfcPcurve::IfcPcurve( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcPcurve::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPcurve> copy_self( new IfcPcurve() );
	if( m_BasisSurface ) { copy_self->m_BasisSurface = dynamic_pointer_cast<IfcSurface>( m_BasisSurface->getDeepCopy(options) ); }
	if( m_ReferenceCurve ) { copy_self->m_ReferenceCurve = dynamic_pointer_cast<IfcCurve>( m_ReferenceCurve->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPcurve::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPCURVE" << "(";
	if( m_BasisSurface ) { stream << "#" << m_BasisSurface->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_ReferenceCurve ) { stream << "#" << m_ReferenceCurve->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcPcurve::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPcurve::toString() const { return L"IfcPcurve"; }
void IfcPcurve::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPcurve, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_BasisSurface, map );
	readEntityReference( args[1], m_ReferenceCurve, map );
}
void IfcPcurve::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcCurve::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "BasisSurface", m_BasisSurface ) );
	vec_attributes.emplace_back( std::make_pair( "ReferenceCurve", m_ReferenceCurve ) );
}
void IfcPcurve::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcCurve::getAttributesInverse( vec_attributes_inverse );
}
void IfcPcurve::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCurve::setInverseCounterparts( ptr_self_entity );
}
void IfcPcurve::unlinkFromInverseCounterparts()
{
	IfcCurve::unlinkFromInverseCounterparts();
}
