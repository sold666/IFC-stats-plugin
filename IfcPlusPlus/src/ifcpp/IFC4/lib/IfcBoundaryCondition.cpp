/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoundaryCondition.h"
#include "ifcpp/IFC4/include/IfcLabel.h"

// ENTITY IfcBoundaryCondition 
IfcBoundaryCondition::IfcBoundaryCondition( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcBoundaryCondition::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcBoundaryCondition> copy_self( new IfcBoundaryCondition() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	return copy_self;
}
void IfcBoundaryCondition::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCBOUNDARYCONDITION" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcBoundaryCondition::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcBoundaryCondition::toString() const { return L"IfcBoundaryCondition"; }
void IfcBoundaryCondition::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcBoundaryCondition, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
}
void IfcBoundaryCondition::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
}
void IfcBoundaryCondition::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IfcBoundaryCondition::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcBoundaryCondition::unlinkFromInverseCounterparts()
{
}
