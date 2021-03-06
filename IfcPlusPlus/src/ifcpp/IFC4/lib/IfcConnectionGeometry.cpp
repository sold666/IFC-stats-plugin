/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcConnectionGeometry.h"

// ENTITY IfcConnectionGeometry 
IfcConnectionGeometry::IfcConnectionGeometry( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcConnectionGeometry::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcConnectionGeometry> copy_self( new IfcConnectionGeometry() );
	return copy_self;
}
void IfcConnectionGeometry::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCONNECTIONGEOMETRY" << "(";
	stream << ");";
}
void IfcConnectionGeometry::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcConnectionGeometry::toString() const { return L"IfcConnectionGeometry"; }
void IfcConnectionGeometry::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
}
void IfcConnectionGeometry::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
}
void IfcConnectionGeometry::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IfcConnectionGeometry::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcConnectionGeometry::unlinkFromInverseCounterparts()
{
}
