/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcLightDistributionDataSourceSelect.h"

// TYPE IfcLightDistributionDataSourceSelect = SELECT	(IfcExternalReference	,IfcLightIntensityDistribution);
shared_ptr<IfcLightDistributionDataSourceSelect> IfcLightDistributionDataSourceSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.empty() ){ return shared_ptr<IfcLightDistributionDataSourceSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcLightDistributionDataSourceSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcLightDistributionDataSourceSelect>();
	}
	shared_ptr<IfcLightDistributionDataSourceSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
