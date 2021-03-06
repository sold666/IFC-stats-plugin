/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcGeometricSetSelect.h"

// TYPE IfcGeometricSetSelect = SELECT	(IfcCurve	,IfcPoint	,IfcSurface);
shared_ptr<IfcGeometricSetSelect> IfcGeometricSetSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.empty() ){ return shared_ptr<IfcGeometricSetSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcGeometricSetSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcGeometricSetSelect>();
	}
	shared_ptr<IfcGeometricSetSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
