/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSurfaceStyleElementSelect.h"
#include "IfcExternalReference.h"
//ENTITY
class IFCQUERY_EXPORT IfcExternallyDefinedSurfaceStyle : virtual public IfcSurfaceStyleElementSelect, public IfcExternalReference
{ 
public:
	IfcExternallyDefinedSurfaceStyle() = default;
	IfcExternallyDefinedSurfaceStyle( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 3; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcExternallyDefinedSurfaceStyle"; }
	virtual const std::wstring toString() const;


	// IfcExternalReference -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcURIReference>									m_Location;					//optional
	//  shared_ptr<IfcIdentifier>									m_Identification;			//optional
	//  shared_ptr<IfcLabel>										m_Name;						//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_ExternalReferenceForResources_inverse;

	// IfcExternallyDefinedSurfaceStyle -----------------------------------------------------------
};

