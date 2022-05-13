/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcColourRgb.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcNormalisedRatioMeasure.h"

// ENTITY IfcColourRgb 
IfcColourRgb::IfcColourRgb( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcColourRgb::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcColourRgb> copy_self( new IfcColourRgb() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Red ) { copy_self->m_Red = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_Red->getDeepCopy(options) ); }
	if( m_Green ) { copy_self->m_Green = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_Green->getDeepCopy(options) ); }
	if( m_Blue ) { copy_self->m_Blue = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_Blue->getDeepCopy(options) ); }
	return copy_self;
}
void IfcColourRgb::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCOLOURRGB" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Red ) { m_Red->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Green ) { m_Green->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Blue ) { m_Blue->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcColourRgb::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcColourRgb::toString() const { return L"IfcColourRgb"; }
void IfcColourRgb::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcColourRgb, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Red = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[1], map );
	m_Green = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[2], map );
	m_Blue = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[3], map );
}
void IfcColourRgb::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcColourSpecification::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Red", m_Red ) );
	vec_attributes.emplace_back( std::make_pair( "Green", m_Green ) );
	vec_attributes.emplace_back( std::make_pair( "Blue", m_Blue ) );
}
void IfcColourRgb::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcColourSpecification::getAttributesInverse( vec_attributes_inverse );
}
void IfcColourRgb::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcColourSpecification::setInverseCounterparts( ptr_self_entity );
}
void IfcColourRgb::unlinkFromInverseCounterparts()
{
	IfcColourSpecification::unlinkFromInverseCounterparts();
}
