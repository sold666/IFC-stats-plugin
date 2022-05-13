/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4/include/IfcLine.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcVector.h"

// ENTITY IfcLine 
IfcLine::IfcLine( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcLine::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLine> copy_self( new IfcLine() );
	if( m_Pnt ) { copy_self->m_Pnt = dynamic_pointer_cast<IfcCartesianPoint>( m_Pnt->getDeepCopy(options) ); }
	if( m_Dir ) { copy_self->m_Dir = dynamic_pointer_cast<IfcVector>( m_Dir->getDeepCopy(options) ); }
	return copy_self;
}
void IfcLine::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCLINE" << "(";
	if( m_Pnt ) { stream << "#" << m_Pnt->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Dir ) { stream << "#" << m_Dir->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcLine::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcLine::toString() const { return L"IfcLine"; }
void IfcLine::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcLine, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Pnt, map );
	readEntityReference( args[1], m_Dir, map );
}
void IfcLine::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcCurve::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Pnt", m_Pnt ) );
	vec_attributes.emplace_back( std::make_pair( "Dir", m_Dir ) );
}
void IfcLine::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcCurve::getAttributesInverse( vec_attributes_inverse );
}
void IfcLine::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCurve::setInverseCounterparts( ptr_self_entity );
}
void IfcLine::unlinkFromInverseCounterparts()
{
	IfcCurve::unlinkFromInverseCounterparts();
}
