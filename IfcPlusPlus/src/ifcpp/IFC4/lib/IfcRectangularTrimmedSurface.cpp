/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcParameterValue.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcRectangularTrimmedSurface.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcSurface.h"

// ENTITY IfcRectangularTrimmedSurface 
IfcRectangularTrimmedSurface::IfcRectangularTrimmedSurface( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcRectangularTrimmedSurface::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRectangularTrimmedSurface> copy_self( new IfcRectangularTrimmedSurface() );
	if( m_BasisSurface ) { copy_self->m_BasisSurface = dynamic_pointer_cast<IfcSurface>( m_BasisSurface->getDeepCopy(options) ); }
	if( m_U1 ) { copy_self->m_U1 = dynamic_pointer_cast<IfcParameterValue>( m_U1->getDeepCopy(options) ); }
	if( m_V1 ) { copy_self->m_V1 = dynamic_pointer_cast<IfcParameterValue>( m_V1->getDeepCopy(options) ); }
	if( m_U2 ) { copy_self->m_U2 = dynamic_pointer_cast<IfcParameterValue>( m_U2->getDeepCopy(options) ); }
	if( m_V2 ) { copy_self->m_V2 = dynamic_pointer_cast<IfcParameterValue>( m_V2->getDeepCopy(options) ); }
	if( m_Usense ) { copy_self->m_Usense = dynamic_pointer_cast<IfcBoolean>( m_Usense->getDeepCopy(options) ); }
	if( m_Vsense ) { copy_self->m_Vsense = dynamic_pointer_cast<IfcBoolean>( m_Vsense->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRectangularTrimmedSurface::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRECTANGULARTRIMMEDSURFACE" << "(";
	if( m_BasisSurface ) { stream << "#" << m_BasisSurface->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_U1 ) { m_U1->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_V1 ) { m_V1->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_U2 ) { m_U2->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_V2 ) { m_V2->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Usense ) { m_Usense->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Vsense ) { m_Vsense->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcRectangularTrimmedSurface::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRectangularTrimmedSurface::toString() const { return L"IfcRectangularTrimmedSurface"; }
void IfcRectangularTrimmedSurface::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRectangularTrimmedSurface, expecting 7, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_BasisSurface, map );
	m_U1 = IfcParameterValue::createObjectFromSTEP( args[1], map );
	m_V1 = IfcParameterValue::createObjectFromSTEP( args[2], map );
	m_U2 = IfcParameterValue::createObjectFromSTEP( args[3], map );
	m_V2 = IfcParameterValue::createObjectFromSTEP( args[4], map );
	m_Usense = IfcBoolean::createObjectFromSTEP( args[5], map );
	m_Vsense = IfcBoolean::createObjectFromSTEP( args[6], map );
}
void IfcRectangularTrimmedSurface::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcBoundedSurface::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "BasisSurface", m_BasisSurface ) );
	vec_attributes.emplace_back( std::make_pair( "U1", m_U1 ) );
	vec_attributes.emplace_back( std::make_pair( "V1", m_V1 ) );
	vec_attributes.emplace_back( std::make_pair( "U2", m_U2 ) );
	vec_attributes.emplace_back( std::make_pair( "V2", m_V2 ) );
	vec_attributes.emplace_back( std::make_pair( "Usense", m_Usense ) );
	vec_attributes.emplace_back( std::make_pair( "Vsense", m_Vsense ) );
}
void IfcRectangularTrimmedSurface::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcBoundedSurface::getAttributesInverse( vec_attributes_inverse );
}
void IfcRectangularTrimmedSurface::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBoundedSurface::setInverseCounterparts( ptr_self_entity );
}
void IfcRectangularTrimmedSurface::unlinkFromInverseCounterparts()
{
	IfcBoundedSurface::unlinkFromInverseCounterparts();
}
