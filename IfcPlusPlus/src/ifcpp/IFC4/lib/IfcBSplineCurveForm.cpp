/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcBSplineCurveForm.h"

// TYPE IfcBSplineCurveForm = ENUMERATION OF	(POLYLINE_FORM	,CIRCULAR_ARC	,ELLIPTIC_ARC	,PARABOLIC_ARC	,HYPERBOLIC_ARC	,UNSPECIFIED);
shared_ptr<BuildingObject> IfcBSplineCurveForm::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcBSplineCurveForm> copy_self( new IfcBSplineCurveForm() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcBSplineCurveForm::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCBSPLINECURVEFORM("; }
	switch( m_enum )
	{
		case ENUM_POLYLINE_FORM:	stream << ".POLYLINE_FORM."; break;
		case ENUM_CIRCULAR_ARC:	stream << ".CIRCULAR_ARC."; break;
		case ENUM_ELLIPTIC_ARC:	stream << ".ELLIPTIC_ARC."; break;
		case ENUM_PARABOLIC_ARC:	stream << ".PARABOLIC_ARC."; break;
		case ENUM_HYPERBOLIC_ARC:	stream << ".HYPERBOLIC_ARC."; break;
		case ENUM_UNSPECIFIED:	stream << ".UNSPECIFIED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcBSplineCurveForm::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_POLYLINE_FORM:	return L"POLYLINE_FORM";
		case ENUM_CIRCULAR_ARC:	return L"CIRCULAR_ARC";
		case ENUM_ELLIPTIC_ARC:	return L"ELLIPTIC_ARC";
		case ENUM_PARABOLIC_ARC:	return L"PARABOLIC_ARC";
		case ENUM_HYPERBOLIC_ARC:	return L"HYPERBOLIC_ARC";
		case ENUM_UNSPECIFIED:	return L"UNSPECIFIED";
	}
	return L"";
}
shared_ptr<IfcBSplineCurveForm> IfcBSplineCurveForm::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcBSplineCurveForm>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcBSplineCurveForm>(); }
	shared_ptr<IfcBSplineCurveForm> type_object( new IfcBSplineCurveForm() );
	if( std_iequal( arg, L".POLYLINE_FORM." ) )
	{
		type_object->m_enum = IfcBSplineCurveForm::ENUM_POLYLINE_FORM;
	}
	else if( std_iequal( arg, L".CIRCULAR_ARC." ) )
	{
		type_object->m_enum = IfcBSplineCurveForm::ENUM_CIRCULAR_ARC;
	}
	else if( std_iequal( arg, L".ELLIPTIC_ARC." ) )
	{
		type_object->m_enum = IfcBSplineCurveForm::ENUM_ELLIPTIC_ARC;
	}
	else if( std_iequal( arg, L".PARABOLIC_ARC." ) )
	{
		type_object->m_enum = IfcBSplineCurveForm::ENUM_PARABOLIC_ARC;
	}
	else if( std_iequal( arg, L".HYPERBOLIC_ARC." ) )
	{
		type_object->m_enum = IfcBSplineCurveForm::ENUM_HYPERBOLIC_ARC;
	}
	else if( std_iequal( arg, L".UNSPECIFIED." ) )
	{
		type_object->m_enum = IfcBSplineCurveForm::ENUM_UNSPECIFIED;
	}
	return type_object;
}
