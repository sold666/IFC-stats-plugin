/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcVolumetricFlowRateMeasure.h"

// TYPE IfcVolumetricFlowRateMeasure = REAL;
IfcVolumetricFlowRateMeasure::IfcVolumetricFlowRateMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcVolumetricFlowRateMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcVolumetricFlowRateMeasure> copy_self( new IfcVolumetricFlowRateMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcVolumetricFlowRateMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCVOLUMETRICFLOWRATEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcVolumetricFlowRateMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcVolumetricFlowRateMeasure> IfcVolumetricFlowRateMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcVolumetricFlowRateMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcVolumetricFlowRateMeasure>(); }
	shared_ptr<IfcVolumetricFlowRateMeasure> type_object( new IfcVolumetricFlowRateMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
