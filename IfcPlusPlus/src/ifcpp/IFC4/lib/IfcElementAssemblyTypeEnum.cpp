/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcElementAssemblyTypeEnum.h"

// TYPE IfcElementAssemblyTypeEnum = ENUMERATION OF	(ACCESSORY_ASSEMBLY	,ARCH	,BEAM_GRID	,BRACED_FRAME	,GIRDER	,REINFORCEMENT_UNIT	,RIGID_FRAME	,SLAB_FIELD	,TRUSS	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcElementAssemblyTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcElementAssemblyTypeEnum> copy_self( new IfcElementAssemblyTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcElementAssemblyTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCELEMENTASSEMBLYTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ACCESSORY_ASSEMBLY:	stream << ".ACCESSORY_ASSEMBLY."; break;
		case ENUM_ARCH:	stream << ".ARCH."; break;
		case ENUM_BEAM_GRID:	stream << ".BEAM_GRID."; break;
		case ENUM_BRACED_FRAME:	stream << ".BRACED_FRAME."; break;
		case ENUM_GIRDER:	stream << ".GIRDER."; break;
		case ENUM_REINFORCEMENT_UNIT:	stream << ".REINFORCEMENT_UNIT."; break;
		case ENUM_RIGID_FRAME:	stream << ".RIGID_FRAME."; break;
		case ENUM_SLAB_FIELD:	stream << ".SLAB_FIELD."; break;
		case ENUM_TRUSS:	stream << ".TRUSS."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcElementAssemblyTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ACCESSORY_ASSEMBLY:	return L"ACCESSORY_ASSEMBLY";
		case ENUM_ARCH:	return L"ARCH";
		case ENUM_BEAM_GRID:	return L"BEAM_GRID";
		case ENUM_BRACED_FRAME:	return L"BRACED_FRAME";
		case ENUM_GIRDER:	return L"GIRDER";
		case ENUM_REINFORCEMENT_UNIT:	return L"REINFORCEMENT_UNIT";
		case ENUM_RIGID_FRAME:	return L"RIGID_FRAME";
		case ENUM_SLAB_FIELD:	return L"SLAB_FIELD";
		case ENUM_TRUSS:	return L"TRUSS";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcElementAssemblyTypeEnum> IfcElementAssemblyTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcElementAssemblyTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcElementAssemblyTypeEnum>(); }
	shared_ptr<IfcElementAssemblyTypeEnum> type_object( new IfcElementAssemblyTypeEnum() );
	if( std_iequal( arg, L".ACCESSORY_ASSEMBLY." ) )
	{
		type_object->m_enum = IfcElementAssemblyTypeEnum::ENUM_ACCESSORY_ASSEMBLY;
	}
	else if( std_iequal( arg, L".ARCH." ) )
	{
		type_object->m_enum = IfcElementAssemblyTypeEnum::ENUM_ARCH;
	}
	else if( std_iequal( arg, L".BEAM_GRID." ) )
	{
		type_object->m_enum = IfcElementAssemblyTypeEnum::ENUM_BEAM_GRID;
	}
	else if( std_iequal( arg, L".BRACED_FRAME." ) )
	{
		type_object->m_enum = IfcElementAssemblyTypeEnum::ENUM_BRACED_FRAME;
	}
	else if( std_iequal( arg, L".GIRDER." ) )
	{
		type_object->m_enum = IfcElementAssemblyTypeEnum::ENUM_GIRDER;
	}
	else if( std_iequal( arg, L".REINFORCEMENT_UNIT." ) )
	{
		type_object->m_enum = IfcElementAssemblyTypeEnum::ENUM_REINFORCEMENT_UNIT;
	}
	else if( std_iequal( arg, L".RIGID_FRAME." ) )
	{
		type_object->m_enum = IfcElementAssemblyTypeEnum::ENUM_RIGID_FRAME;
	}
	else if( std_iequal( arg, L".SLAB_FIELD." ) )
	{
		type_object->m_enum = IfcElementAssemblyTypeEnum::ENUM_SLAB_FIELD;
	}
	else if( std_iequal( arg, L".TRUSS." ) )
	{
		type_object->m_enum = IfcElementAssemblyTypeEnum::ENUM_TRUSS;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcElementAssemblyTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcElementAssemblyTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
