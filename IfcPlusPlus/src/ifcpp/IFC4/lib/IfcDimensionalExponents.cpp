/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcDimensionalExponents.h"

// ENTITY IfcDimensionalExponents 
IfcDimensionalExponents::IfcDimensionalExponents( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcDimensionalExponents::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDimensionalExponents> copy_self( new IfcDimensionalExponents() );
	copy_self->m_LengthExponent = m_LengthExponent;
	copy_self->m_MassExponent = m_MassExponent;
	copy_self->m_TimeExponent = m_TimeExponent;
	copy_self->m_ElectricCurrentExponent = m_ElectricCurrentExponent;
	copy_self->m_ThermodynamicTemperatureExponent = m_ThermodynamicTemperatureExponent;
	copy_self->m_AmountOfSubstanceExponent = m_AmountOfSubstanceExponent;
	copy_self->m_LuminousIntensityExponent = m_LuminousIntensityExponent;
	return copy_self;
}
void IfcDimensionalExponents::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCDIMENSIONALEXPONENTS" << "(";
	stream << m_LengthExponent;
	stream << ",";
	stream << m_MassExponent;
	stream << ",";
	stream << m_TimeExponent;
	stream << ",";
	stream << m_ElectricCurrentExponent;
	stream << ",";
	stream << m_ThermodynamicTemperatureExponent;
	stream << ",";
	stream << m_AmountOfSubstanceExponent;
	stream << ",";
	stream << m_LuminousIntensityExponent;
	stream << ");";
}
void IfcDimensionalExponents::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcDimensionalExponents::toString() const { return L"IfcDimensionalExponents"; }
void IfcDimensionalExponents::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcDimensionalExponents, expecting 7, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readIntegerValue( args[0], m_LengthExponent );
	readIntegerValue( args[1], m_MassExponent );
	readIntegerValue( args[2], m_TimeExponent );
	readIntegerValue( args[3], m_ElectricCurrentExponent );
	readIntegerValue( args[4], m_ThermodynamicTemperatureExponent );
	readIntegerValue( args[5], m_AmountOfSubstanceExponent );
	readIntegerValue( args[6], m_LuminousIntensityExponent );
}
void IfcDimensionalExponents::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "LengthExponent", shared_ptr<IntegerAttribute>( new IntegerAttribute( m_LengthExponent ) ) ) );
	vec_attributes.emplace_back( std::make_pair( "MassExponent", shared_ptr<IntegerAttribute>( new IntegerAttribute( m_MassExponent ) ) ) );
	vec_attributes.emplace_back( std::make_pair( "TimeExponent", shared_ptr<IntegerAttribute>( new IntegerAttribute( m_TimeExponent ) ) ) );
	vec_attributes.emplace_back( std::make_pair( "ElectricCurrentExponent", shared_ptr<IntegerAttribute>( new IntegerAttribute( m_ElectricCurrentExponent ) ) ) );
	vec_attributes.emplace_back( std::make_pair( "ThermodynamicTemperatureExponent", shared_ptr<IntegerAttribute>( new IntegerAttribute( m_ThermodynamicTemperatureExponent ) ) ) );
	vec_attributes.emplace_back( std::make_pair( "AmountOfSubstanceExponent", shared_ptr<IntegerAttribute>( new IntegerAttribute( m_AmountOfSubstanceExponent ) ) ) );
	vec_attributes.emplace_back( std::make_pair( "LuminousIntensityExponent", shared_ptr<IntegerAttribute>( new IntegerAttribute( m_LuminousIntensityExponent ) ) ) );
}
void IfcDimensionalExponents::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IfcDimensionalExponents::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcDimensionalExponents::unlinkFromInverseCounterparts()
{
}
