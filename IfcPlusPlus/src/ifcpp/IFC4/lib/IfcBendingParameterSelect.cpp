/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPlaneAngleMeasure.h"
#include "ifcpp/IFC4/include/IfcBendingParameterSelect.h"

// TYPE IfcBendingParameterSelect = SELECT	(IfcLengthMeasure	,IfcPlaneAngleMeasure);
shared_ptr<IfcBendingParameterSelect> IfcBendingParameterSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.empty() ){ return shared_ptr<IfcBendingParameterSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcBendingParameterSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcBendingParameterSelect>();
	}
	shared_ptr<IfcBendingParameterSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
