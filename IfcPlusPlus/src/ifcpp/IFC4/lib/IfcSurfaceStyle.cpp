/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcSurfaceSide.h"
#include "ifcpp/IFC4/include/IfcSurfaceStyle.h"
#include "ifcpp/IFC4/include/IfcSurfaceStyleElementSelect.h"

// ENTITY IfcSurfaceStyle 
IfcSurfaceStyle::IfcSurfaceStyle( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcSurfaceStyle::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSurfaceStyle> copy_self( new IfcSurfaceStyle() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Side ) { copy_self->m_Side = dynamic_pointer_cast<IfcSurfaceSide>( m_Side->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Styles.size(); ++ii )
	{
		auto item_ii = m_Styles[ii];
		if( item_ii )
		{
			copy_self->m_Styles.emplace_back( dynamic_pointer_cast<IfcSurfaceStyleElementSelect>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcSurfaceStyle::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSURFACESTYLE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Side ) { m_Side->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_Styles.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcSurfaceStyleElementSelect>& type_object = m_Styles[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ");";
}
void IfcSurfaceStyle::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcSurfaceStyle::toString() const { return L"IfcSurfaceStyle"; }
void IfcSurfaceStyle::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSurfaceStyle, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Side = IfcSurfaceSide::createObjectFromSTEP( args[1], map );
	readSelectList( args[2], m_Styles, map );
}
void IfcSurfaceStyle::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPresentationStyle::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Side", m_Side ) );
	if( !m_Styles.empty() )
	{
		shared_ptr<AttributeObjectVector> Styles_vec_object( new AttributeObjectVector() );
		std::copy( m_Styles.begin(), m_Styles.end(), std::back_inserter( Styles_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "Styles", Styles_vec_object ) );
	}
}
void IfcSurfaceStyle::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPresentationStyle::getAttributesInverse( vec_attributes_inverse );
}
void IfcSurfaceStyle::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationStyle::setInverseCounterparts( ptr_self_entity );
}
void IfcSurfaceStyle::unlinkFromInverseCounterparts()
{
	IfcPresentationStyle::unlinkFromInverseCounterparts();
}
