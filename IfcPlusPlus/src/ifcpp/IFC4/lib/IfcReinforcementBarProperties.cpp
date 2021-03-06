/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAreaMeasure.h"
#include "ifcpp/IFC4/include/IfcCountMeasure.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcReinforcementBarProperties.h"
#include "ifcpp/IFC4/include/IfcReinforcingBarSurfaceEnum.h"

// ENTITY IfcReinforcementBarProperties 
IfcReinforcementBarProperties::IfcReinforcementBarProperties( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcReinforcementBarProperties::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcReinforcementBarProperties> copy_self( new IfcReinforcementBarProperties() );
	if( m_TotalCrossSectionArea ) { copy_self->m_TotalCrossSectionArea = dynamic_pointer_cast<IfcAreaMeasure>( m_TotalCrossSectionArea->getDeepCopy(options) ); }
	if( m_SteelGrade ) { copy_self->m_SteelGrade = dynamic_pointer_cast<IfcLabel>( m_SteelGrade->getDeepCopy(options) ); }
	if( m_BarSurface ) { copy_self->m_BarSurface = dynamic_pointer_cast<IfcReinforcingBarSurfaceEnum>( m_BarSurface->getDeepCopy(options) ); }
	if( m_EffectiveDepth ) { copy_self->m_EffectiveDepth = dynamic_pointer_cast<IfcLengthMeasure>( m_EffectiveDepth->getDeepCopy(options) ); }
	if( m_NominalBarDiameter ) { copy_self->m_NominalBarDiameter = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_NominalBarDiameter->getDeepCopy(options) ); }
	if( m_BarCount ) { copy_self->m_BarCount = dynamic_pointer_cast<IfcCountMeasure>( m_BarCount->getDeepCopy(options) ); }
	return copy_self;
}
void IfcReinforcementBarProperties::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCREINFORCEMENTBARPROPERTIES" << "(";
	if( m_TotalCrossSectionArea ) { m_TotalCrossSectionArea->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SteelGrade ) { m_SteelGrade->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_BarSurface ) { m_BarSurface->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EffectiveDepth ) { m_EffectiveDepth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_NominalBarDiameter ) { m_NominalBarDiameter->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_BarCount ) { m_BarCount->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcReinforcementBarProperties::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcReinforcementBarProperties::toString() const { return L"IfcReinforcementBarProperties"; }
void IfcReinforcementBarProperties::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcReinforcementBarProperties, expecting 6, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_TotalCrossSectionArea = IfcAreaMeasure::createObjectFromSTEP( args[0], map );
	m_SteelGrade = IfcLabel::createObjectFromSTEP( args[1], map );
	m_BarSurface = IfcReinforcingBarSurfaceEnum::createObjectFromSTEP( args[2], map );
	m_EffectiveDepth = IfcLengthMeasure::createObjectFromSTEP( args[3], map );
	m_NominalBarDiameter = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map );
	m_BarCount = IfcCountMeasure::createObjectFromSTEP( args[5], map );
}
void IfcReinforcementBarProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPreDefinedProperties::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "TotalCrossSectionArea", m_TotalCrossSectionArea ) );
	vec_attributes.emplace_back( std::make_pair( "SteelGrade", m_SteelGrade ) );
	vec_attributes.emplace_back( std::make_pair( "BarSurface", m_BarSurface ) );
	vec_attributes.emplace_back( std::make_pair( "EffectiveDepth", m_EffectiveDepth ) );
	vec_attributes.emplace_back( std::make_pair( "NominalBarDiameter", m_NominalBarDiameter ) );
	vec_attributes.emplace_back( std::make_pair( "BarCount", m_BarCount ) );
}
void IfcReinforcementBarProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPreDefinedProperties::getAttributesInverse( vec_attributes_inverse );
}
void IfcReinforcementBarProperties::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPreDefinedProperties::setInverseCounterparts( ptr_self_entity );
}
void IfcReinforcementBarProperties::unlinkFromInverseCounterparts()
{
	IfcPreDefinedProperties::unlinkFromInverseCounterparts();
}
