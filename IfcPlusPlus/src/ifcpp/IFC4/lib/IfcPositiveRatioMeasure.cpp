/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcSizeSelect.h"
#include "ifcpp/IFC4/include/IfcPositiveRatioMeasure.h"

// TYPE IfcPositiveRatioMeasure = IfcRatioMeasure;
shared_ptr<BuildingObject> IfcPositiveRatioMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPositiveRatioMeasure> copy_self( new IfcPositiveRatioMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcPositiveRatioMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPOSITIVERATIOMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcPositiveRatioMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcPositiveRatioMeasure> IfcPositiveRatioMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPositiveRatioMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPositiveRatioMeasure>(); }
	shared_ptr<IfcPositiveRatioMeasure> type_object( new IfcPositiveRatioMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
