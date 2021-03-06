/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcTime.h"
#include "ifcpp/IFC4/include/IfcTimePeriod.h"

// ENTITY IfcTimePeriod 
IfcTimePeriod::IfcTimePeriod( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcTimePeriod::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTimePeriod> copy_self( new IfcTimePeriod() );
	if( m_StartTime ) { copy_self->m_StartTime = dynamic_pointer_cast<IfcTime>( m_StartTime->getDeepCopy(options) ); }
	if( m_EndTime ) { copy_self->m_EndTime = dynamic_pointer_cast<IfcTime>( m_EndTime->getDeepCopy(options) ); }
	return copy_self;
}
void IfcTimePeriod::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTIMEPERIOD" << "(";
	if( m_StartTime ) { m_StartTime->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EndTime ) { m_EndTime->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcTimePeriod::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTimePeriod::toString() const { return L"IfcTimePeriod"; }
void IfcTimePeriod::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTimePeriod, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_StartTime = IfcTime::createObjectFromSTEP( args[0], map );
	m_EndTime = IfcTime::createObjectFromSTEP( args[1], map );
}
void IfcTimePeriod::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "StartTime", m_StartTime ) );
	vec_attributes.emplace_back( std::make_pair( "EndTime", m_EndTime ) );
}
void IfcTimePeriod::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IfcTimePeriod::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcTimePeriod::unlinkFromInverseCounterparts()
{
}
