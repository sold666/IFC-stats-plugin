/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcUnit.h"

// TYPE IfcUnit = SELECT	(IfcDerivedUnit	,IfcMonetaryUnit	,IfcNamedUnit);
shared_ptr<IfcUnit> IfcUnit::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.empty() ){ return shared_ptr<IfcUnit>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcUnit>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcUnit>();
	}
	shared_ptr<IfcUnit> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
