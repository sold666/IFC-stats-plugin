/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcDataOriginEnum.h"
#include "ifcpp/IFC4/include/IfcDateTime.h"
#include "ifcpp/IFC4/include/IfcDuration.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcPositiveRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcResourceTime.h"

// ENTITY IfcResourceTime 
IfcResourceTime::IfcResourceTime( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcResourceTime::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcResourceTime> copy_self( new IfcResourceTime() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_DataOrigin ) { copy_self->m_DataOrigin = dynamic_pointer_cast<IfcDataOriginEnum>( m_DataOrigin->getDeepCopy(options) ); }
	if( m_UserDefinedDataOrigin ) { copy_self->m_UserDefinedDataOrigin = dynamic_pointer_cast<IfcLabel>( m_UserDefinedDataOrigin->getDeepCopy(options) ); }
	if( m_ScheduleWork ) { copy_self->m_ScheduleWork = dynamic_pointer_cast<IfcDuration>( m_ScheduleWork->getDeepCopy(options) ); }
	if( m_ScheduleUsage ) { copy_self->m_ScheduleUsage = dynamic_pointer_cast<IfcPositiveRatioMeasure>( m_ScheduleUsage->getDeepCopy(options) ); }
	if( m_ScheduleStart ) { copy_self->m_ScheduleStart = dynamic_pointer_cast<IfcDateTime>( m_ScheduleStart->getDeepCopy(options) ); }
	if( m_ScheduleFinish ) { copy_self->m_ScheduleFinish = dynamic_pointer_cast<IfcDateTime>( m_ScheduleFinish->getDeepCopy(options) ); }
	if( m_ScheduleContour ) { copy_self->m_ScheduleContour = dynamic_pointer_cast<IfcLabel>( m_ScheduleContour->getDeepCopy(options) ); }
	if( m_LevelingDelay ) { copy_self->m_LevelingDelay = dynamic_pointer_cast<IfcDuration>( m_LevelingDelay->getDeepCopy(options) ); }
	if( m_IsOverAllocated ) { copy_self->m_IsOverAllocated = dynamic_pointer_cast<IfcBoolean>( m_IsOverAllocated->getDeepCopy(options) ); }
	if( m_StatusTime ) { copy_self->m_StatusTime = dynamic_pointer_cast<IfcDateTime>( m_StatusTime->getDeepCopy(options) ); }
	if( m_ActualWork ) { copy_self->m_ActualWork = dynamic_pointer_cast<IfcDuration>( m_ActualWork->getDeepCopy(options) ); }
	if( m_ActualUsage ) { copy_self->m_ActualUsage = dynamic_pointer_cast<IfcPositiveRatioMeasure>( m_ActualUsage->getDeepCopy(options) ); }
	if( m_ActualStart ) { copy_self->m_ActualStart = dynamic_pointer_cast<IfcDateTime>( m_ActualStart->getDeepCopy(options) ); }
	if( m_ActualFinish ) { copy_self->m_ActualFinish = dynamic_pointer_cast<IfcDateTime>( m_ActualFinish->getDeepCopy(options) ); }
	if( m_RemainingWork ) { copy_self->m_RemainingWork = dynamic_pointer_cast<IfcDuration>( m_RemainingWork->getDeepCopy(options) ); }
	if( m_RemainingUsage ) { copy_self->m_RemainingUsage = dynamic_pointer_cast<IfcPositiveRatioMeasure>( m_RemainingUsage->getDeepCopy(options) ); }
	if( m_Completion ) { copy_self->m_Completion = dynamic_pointer_cast<IfcPositiveRatioMeasure>( m_Completion->getDeepCopy(options) ); }
	return copy_self;
}
void IfcResourceTime::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRESOURCETIME" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_DataOrigin ) { m_DataOrigin->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_UserDefinedDataOrigin ) { m_UserDefinedDataOrigin->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ScheduleWork ) { m_ScheduleWork->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ScheduleUsage ) { m_ScheduleUsage->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ScheduleStart ) { m_ScheduleStart->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ScheduleFinish ) { m_ScheduleFinish->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ScheduleContour ) { m_ScheduleContour->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LevelingDelay ) { m_LevelingDelay->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_IsOverAllocated ) { m_IsOverAllocated->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StatusTime ) { m_StatusTime->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ActualWork ) { m_ActualWork->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ActualUsage ) { m_ActualUsage->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ActualStart ) { m_ActualStart->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ActualFinish ) { m_ActualFinish->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RemainingWork ) { m_RemainingWork->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RemainingUsage ) { m_RemainingUsage->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Completion ) { m_Completion->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcResourceTime::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcResourceTime::toString() const { return L"IfcResourceTime"; }
void IfcResourceTime::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 18 ){ std::stringstream err; err << "Wrong parameter count for entity IfcResourceTime, expecting 18, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_DataOrigin = IfcDataOriginEnum::createObjectFromSTEP( args[1], map );
	m_UserDefinedDataOrigin = IfcLabel::createObjectFromSTEP( args[2], map );
	m_ScheduleWork = IfcDuration::createObjectFromSTEP( args[3], map );
	m_ScheduleUsage = IfcPositiveRatioMeasure::createObjectFromSTEP( args[4], map );
	m_ScheduleStart = IfcDateTime::createObjectFromSTEP( args[5], map );
	m_ScheduleFinish = IfcDateTime::createObjectFromSTEP( args[6], map );
	m_ScheduleContour = IfcLabel::createObjectFromSTEP( args[7], map );
	m_LevelingDelay = IfcDuration::createObjectFromSTEP( args[8], map );
	m_IsOverAllocated = IfcBoolean::createObjectFromSTEP( args[9], map );
	m_StatusTime = IfcDateTime::createObjectFromSTEP( args[10], map );
	m_ActualWork = IfcDuration::createObjectFromSTEP( args[11], map );
	m_ActualUsage = IfcPositiveRatioMeasure::createObjectFromSTEP( args[12], map );
	m_ActualStart = IfcDateTime::createObjectFromSTEP( args[13], map );
	m_ActualFinish = IfcDateTime::createObjectFromSTEP( args[14], map );
	m_RemainingWork = IfcDuration::createObjectFromSTEP( args[15], map );
	m_RemainingUsage = IfcPositiveRatioMeasure::createObjectFromSTEP( args[16], map );
	m_Completion = IfcPositiveRatioMeasure::createObjectFromSTEP( args[17], map );
}
void IfcResourceTime::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcSchedulingTime::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ScheduleWork", m_ScheduleWork ) );
	vec_attributes.emplace_back( std::make_pair( "ScheduleUsage", m_ScheduleUsage ) );
	vec_attributes.emplace_back( std::make_pair( "ScheduleStart", m_ScheduleStart ) );
	vec_attributes.emplace_back( std::make_pair( "ScheduleFinish", m_ScheduleFinish ) );
	vec_attributes.emplace_back( std::make_pair( "ScheduleContour", m_ScheduleContour ) );
	vec_attributes.emplace_back( std::make_pair( "LevelingDelay", m_LevelingDelay ) );
	vec_attributes.emplace_back( std::make_pair( "IsOverAllocated", m_IsOverAllocated ) );
	vec_attributes.emplace_back( std::make_pair( "StatusTime", m_StatusTime ) );
	vec_attributes.emplace_back( std::make_pair( "ActualWork", m_ActualWork ) );
	vec_attributes.emplace_back( std::make_pair( "ActualUsage", m_ActualUsage ) );
	vec_attributes.emplace_back( std::make_pair( "ActualStart", m_ActualStart ) );
	vec_attributes.emplace_back( std::make_pair( "ActualFinish", m_ActualFinish ) );
	vec_attributes.emplace_back( std::make_pair( "RemainingWork", m_RemainingWork ) );
	vec_attributes.emplace_back( std::make_pair( "RemainingUsage", m_RemainingUsage ) );
	vec_attributes.emplace_back( std::make_pair( "Completion", m_Completion ) );
}
void IfcResourceTime::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcSchedulingTime::getAttributesInverse( vec_attributes_inverse );
}
void IfcResourceTime::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSchedulingTime::setInverseCounterparts( ptr_self_entity );
}
void IfcResourceTime::unlinkFromInverseCounterparts()
{
	IfcSchedulingTime::unlinkFromInverseCounterparts();
}
