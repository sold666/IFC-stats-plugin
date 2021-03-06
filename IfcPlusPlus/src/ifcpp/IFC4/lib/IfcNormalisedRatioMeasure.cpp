/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcColourOrFactor.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcSizeSelect.h"
#include "ifcpp/IFC4/include/IfcNormalisedRatioMeasure.h"

// TYPE IfcNormalisedRatioMeasure = IfcRatioMeasure;
shared_ptr<BuildingObject> IfcNormalisedRatioMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcNormalisedRatioMeasure> copy_self( new IfcNormalisedRatioMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcNormalisedRatioMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCNORMALISEDRATIOMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcNormalisedRatioMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcNormalisedRatioMeasure> IfcNormalisedRatioMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcNormalisedRatioMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcNormalisedRatioMeasure>(); }
	shared_ptr<IfcNormalisedRatioMeasure> type_object( new IfcNormalisedRatioMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
