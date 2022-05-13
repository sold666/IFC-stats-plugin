/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcModulusOfSubgradeReactionSelect.h"
#include "ifcpp/IFC4/include/IfcModulusOfSubgradeReactionMeasure.h"

// TYPE IfcModulusOfSubgradeReactionMeasure = REAL;
IfcModulusOfSubgradeReactionMeasure::IfcModulusOfSubgradeReactionMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcModulusOfSubgradeReactionMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcModulusOfSubgradeReactionMeasure> copy_self( new IfcModulusOfSubgradeReactionMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcModulusOfSubgradeReactionMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMODULUSOFSUBGRADEREACTIONMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcModulusOfSubgradeReactionMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcModulusOfSubgradeReactionMeasure> IfcModulusOfSubgradeReactionMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcModulusOfSubgradeReactionMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcModulusOfSubgradeReactionMeasure>(); }
	shared_ptr<IfcModulusOfSubgradeReactionMeasure> type_object( new IfcModulusOfSubgradeReactionMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
