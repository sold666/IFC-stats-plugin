/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCardinalPointReference.h"
#include "ifcpp/IFC4/include/IfcMaterialProfileSet.h"
#include "ifcpp/IFC4/include/IfcMaterialProfileSetUsageTapering.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcRelAssociatesMaterial.h"

// ENTITY IfcMaterialProfileSetUsageTapering 
IfcMaterialProfileSetUsageTapering::IfcMaterialProfileSetUsageTapering( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcMaterialProfileSetUsageTapering::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMaterialProfileSetUsageTapering> copy_self( new IfcMaterialProfileSetUsageTapering() );
	if( m_ForProfileSet ) { copy_self->m_ForProfileSet = dynamic_pointer_cast<IfcMaterialProfileSet>( m_ForProfileSet->getDeepCopy(options) ); }
	if( m_CardinalPoint ) { copy_self->m_CardinalPoint = dynamic_pointer_cast<IfcCardinalPointReference>( m_CardinalPoint->getDeepCopy(options) ); }
	if( m_ReferenceExtent ) { copy_self->m_ReferenceExtent = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_ReferenceExtent->getDeepCopy(options) ); }
	if( m_ForProfileEndSet ) { copy_self->m_ForProfileEndSet = dynamic_pointer_cast<IfcMaterialProfileSet>( m_ForProfileEndSet->getDeepCopy(options) ); }
	if( m_CardinalEndPoint ) { copy_self->m_CardinalEndPoint = dynamic_pointer_cast<IfcCardinalPointReference>( m_CardinalEndPoint->getDeepCopy(options) ); }
	return copy_self;
}
void IfcMaterialProfileSetUsageTapering::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCMATERIALPROFILESETUSAGETAPERING" << "(";
	if( m_ForProfileSet ) { stream << "#" << m_ForProfileSet->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_CardinalPoint ) { m_CardinalPoint->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ReferenceExtent ) { m_ReferenceExtent->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ForProfileEndSet ) { stream << "#" << m_ForProfileEndSet->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_CardinalEndPoint ) { m_CardinalEndPoint->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcMaterialProfileSetUsageTapering::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcMaterialProfileSetUsageTapering::toString() const { return L"IfcMaterialProfileSetUsageTapering"; }
void IfcMaterialProfileSetUsageTapering::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMaterialProfileSetUsageTapering, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_ForProfileSet, map );
	m_CardinalPoint = IfcCardinalPointReference::createObjectFromSTEP( args[1], map );
	m_ReferenceExtent = IfcPositiveLengthMeasure::createObjectFromSTEP( args[2], map );
	readEntityReference( args[3], m_ForProfileEndSet, map );
	m_CardinalEndPoint = IfcCardinalPointReference::createObjectFromSTEP( args[4], map );
}
void IfcMaterialProfileSetUsageTapering::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcMaterialProfileSetUsage::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ForProfileEndSet", m_ForProfileEndSet ) );
	vec_attributes.emplace_back( std::make_pair( "CardinalEndPoint", m_CardinalEndPoint ) );
}
void IfcMaterialProfileSetUsageTapering::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcMaterialProfileSetUsage::getAttributesInverse( vec_attributes_inverse );
}
void IfcMaterialProfileSetUsageTapering::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcMaterialProfileSetUsage::setInverseCounterparts( ptr_self_entity );
}
void IfcMaterialProfileSetUsageTapering::unlinkFromInverseCounterparts()
{
	IfcMaterialProfileSetUsage::unlinkFromInverseCounterparts();
}
