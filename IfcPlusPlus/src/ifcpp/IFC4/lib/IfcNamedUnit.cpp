/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcDimensionalExponents.h"
#include "ifcpp/IFC4/include/IfcNamedUnit.h"
#include "ifcpp/IFC4/include/IfcUnitEnum.h"

// ENTITY IfcNamedUnit 
IfcNamedUnit::IfcNamedUnit( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcNamedUnit::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcNamedUnit> copy_self( new IfcNamedUnit() );
	if( m_Dimensions ) { copy_self->m_Dimensions = dynamic_pointer_cast<IfcDimensionalExponents>( m_Dimensions->getDeepCopy(options) ); }
	if( m_UnitType ) { copy_self->m_UnitType = dynamic_pointer_cast<IfcUnitEnum>( m_UnitType->getDeepCopy(options) ); }
	return copy_self;
}
void IfcNamedUnit::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCNAMEDUNIT" << "(";
	if( m_Dimensions ) { stream << "#" << m_Dimensions->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_UnitType ) { m_UnitType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcNamedUnit::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcNamedUnit::toString() const { return L"IfcNamedUnit"; }
void IfcNamedUnit::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcNamedUnit, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Dimensions, map );
	m_UnitType = IfcUnitEnum::createObjectFromSTEP( args[1], map );
}
void IfcNamedUnit::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "Dimensions", m_Dimensions ) );
	vec_attributes.emplace_back( std::make_pair( "UnitType", m_UnitType ) );
}
void IfcNamedUnit::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IfcNamedUnit::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcNamedUnit::unlinkFromInverseCounterparts()
{
}
