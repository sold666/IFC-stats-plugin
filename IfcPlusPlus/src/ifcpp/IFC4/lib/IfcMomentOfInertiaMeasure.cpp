/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcMomentOfInertiaMeasure.h"

// TYPE IfcMomentOfInertiaMeasure = REAL;
IfcMomentOfInertiaMeasure::IfcMomentOfInertiaMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcMomentOfInertiaMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMomentOfInertiaMeasure> copy_self( new IfcMomentOfInertiaMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcMomentOfInertiaMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMOMENTOFINERTIAMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcMomentOfInertiaMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcMomentOfInertiaMeasure> IfcMomentOfInertiaMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcMomentOfInertiaMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcMomentOfInertiaMeasure>(); }
	shared_ptr<IfcMomentOfInertiaMeasure> type_object( new IfcMomentOfInertiaMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
