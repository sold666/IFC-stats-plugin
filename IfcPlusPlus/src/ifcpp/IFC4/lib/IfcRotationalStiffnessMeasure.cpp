/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcRotationalStiffnessSelect.h"
#include "ifcpp/IFC4/include/IfcRotationalStiffnessMeasure.h"

// TYPE IfcRotationalStiffnessMeasure = REAL;
IfcRotationalStiffnessMeasure::IfcRotationalStiffnessMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcRotationalStiffnessMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRotationalStiffnessMeasure> copy_self( new IfcRotationalStiffnessMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcRotationalStiffnessMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCROTATIONALSTIFFNESSMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcRotationalStiffnessMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcRotationalStiffnessMeasure> IfcRotationalStiffnessMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcRotationalStiffnessMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcRotationalStiffnessMeasure>(); }
	shared_ptr<IfcRotationalStiffnessMeasure> type_object( new IfcRotationalStiffnessMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
