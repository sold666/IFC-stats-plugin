/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcSolidModel.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcSolidModel 
IfcSolidModel::IfcSolidModel( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcSolidModel::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSolidModel> copy_self( new IfcSolidModel() );
	return copy_self;
}
void IfcSolidModel::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSOLIDMODEL" << "(";
	stream << ");";
}
void IfcSolidModel::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcSolidModel::toString() const { return L"IfcSolidModel"; }
void IfcSolidModel::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
}
void IfcSolidModel::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcGeometricRepresentationItem::getAttributes( vec_attributes );
}
void IfcSolidModel::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcSolidModel::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcSolidModel::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
