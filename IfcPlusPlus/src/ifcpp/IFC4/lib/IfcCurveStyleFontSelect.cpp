/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcCurveFontOrScaledCurveFontSelect.h"
#include "ifcpp/IFC4/include/IfcCurveStyleFontSelect.h"

// TYPE IfcCurveStyleFontSelect = SELECT	(IfcCurveStyleFont	,IfcPreDefinedCurveFont);
shared_ptr<IfcCurveStyleFontSelect> IfcCurveStyleFontSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.empty() ){ return shared_ptr<IfcCurveStyleFontSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcCurveStyleFontSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcCurveStyleFontSelect>();
	}
	shared_ptr<IfcCurveStyleFontSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
