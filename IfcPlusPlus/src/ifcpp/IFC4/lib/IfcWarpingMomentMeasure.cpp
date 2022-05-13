/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcWarpingStiffnessSelect.h"
#include "ifcpp/IFC4/include/IfcWarpingMomentMeasure.h"

// TYPE IfcWarpingMomentMeasure = REAL;
IfcWarpingMomentMeasure::IfcWarpingMomentMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcWarpingMomentMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcWarpingMomentMeasure> copy_self( new IfcWarpingMomentMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcWarpingMomentMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCWARPINGMOMENTMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcWarpingMomentMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcWarpingMomentMeasure> IfcWarpingMomentMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcWarpingMomentMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcWarpingMomentMeasure>(); }
	shared_ptr<IfcWarpingMomentMeasure> type_object( new IfcWarpingMomentMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}