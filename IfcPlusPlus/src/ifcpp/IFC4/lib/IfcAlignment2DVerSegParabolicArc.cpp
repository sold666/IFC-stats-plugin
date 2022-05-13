/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAlignment2DVerSegParabolicArc.h"
#include "ifcpp/IFC4/include/IfcAlignment2DVertical.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcAlignment2DVerSegParabolicArc 
IfcAlignment2DVerSegParabolicArc::IfcAlignment2DVerSegParabolicArc( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcAlignment2DVerSegParabolicArc::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAlignment2DVerSegParabolicArc> copy_self( new IfcAlignment2DVerSegParabolicArc() );
	if( m_TangentialContinuity ) { copy_self->m_TangentialContinuity = dynamic_pointer_cast<IfcBoolean>( m_TangentialContinuity->getDeepCopy(options) ); }
	if( m_StartTag ) { copy_self->m_StartTag = dynamic_pointer_cast<IfcLabel>( m_StartTag->getDeepCopy(options) ); }
	if( m_EndTag ) { copy_self->m_EndTag = dynamic_pointer_cast<IfcLabel>( m_EndTag->getDeepCopy(options) ); }
	if( m_StartDistAlong ) { copy_self->m_StartDistAlong = dynamic_pointer_cast<IfcLengthMeasure>( m_StartDistAlong->getDeepCopy(options) ); }
	if( m_HorizontalLength ) { copy_self->m_HorizontalLength = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_HorizontalLength->getDeepCopy(options) ); }
	if( m_StartHeight ) { copy_self->m_StartHeight = dynamic_pointer_cast<IfcLengthMeasure>( m_StartHeight->getDeepCopy(options) ); }
	if( m_StartGradient ) { copy_self->m_StartGradient = dynamic_pointer_cast<IfcRatioMeasure>( m_StartGradient->getDeepCopy(options) ); }
	if( m_ParabolaConstant ) { copy_self->m_ParabolaConstant = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_ParabolaConstant->getDeepCopy(options) ); }
	if( m_IsConvex ) { copy_self->m_IsConvex = dynamic_pointer_cast<IfcBoolean>( m_IsConvex->getDeepCopy(options) ); }
	return copy_self;
}
void IfcAlignment2DVerSegParabolicArc::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCALIGNMENT2DVERSEGPARABOLICARC" << "(";
	if( m_TangentialContinuity ) { m_TangentialContinuity->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartTag ) { m_StartTag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EndTag ) { m_EndTag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartDistAlong ) { m_StartDistAlong->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_HorizontalLength ) { m_HorizontalLength->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartHeight ) { m_StartHeight->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartGradient ) { m_StartGradient->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ParabolaConstant ) { m_ParabolaConstant->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_IsConvex ) { m_IsConvex->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcAlignment2DVerSegParabolicArc::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcAlignment2DVerSegParabolicArc::toString() const { return L"IfcAlignment2DVerSegParabolicArc"; }
void IfcAlignment2DVerSegParabolicArc::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcAlignment2DVerSegParabolicArc, expecting 9, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_TangentialContinuity = IfcBoolean::createObjectFromSTEP( args[0], map );
	m_StartTag = IfcLabel::createObjectFromSTEP( args[1], map );
	m_EndTag = IfcLabel::createObjectFromSTEP( args[2], map );
	m_StartDistAlong = IfcLengthMeasure::createObjectFromSTEP( args[3], map );
	m_HorizontalLength = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map );
	m_StartHeight = IfcLengthMeasure::createObjectFromSTEP( args[5], map );
	m_StartGradient = IfcRatioMeasure::createObjectFromSTEP( args[6], map );
	m_ParabolaConstant = IfcPositiveLengthMeasure::createObjectFromSTEP( args[7], map );
	m_IsConvex = IfcBoolean::createObjectFromSTEP( args[8], map );
}
void IfcAlignment2DVerSegParabolicArc::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcAlignment2DVerticalSegment::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ParabolaConstant", m_ParabolaConstant ) );
	vec_attributes.emplace_back( std::make_pair( "IsConvex", m_IsConvex ) );
}
void IfcAlignment2DVerSegParabolicArc::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcAlignment2DVerticalSegment::getAttributesInverse( vec_attributes_inverse );
}
void IfcAlignment2DVerSegParabolicArc::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcAlignment2DVerticalSegment::setInverseCounterparts( ptr_self_entity );
}
void IfcAlignment2DVerSegParabolicArc::unlinkFromInverseCounterparts()
{
	IfcAlignment2DVerticalSegment::unlinkFromInverseCounterparts();
}
