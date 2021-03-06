/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCurveStyleFont.h"
#include "ifcpp/IFC4/include/IfcCurveStyleFontPattern.h"
#include "ifcpp/IFC4/include/IfcLabel.h"

// ENTITY IfcCurveStyleFont 
IfcCurveStyleFont::IfcCurveStyleFont( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcCurveStyleFont::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCurveStyleFont> copy_self( new IfcCurveStyleFont() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_PatternList.size(); ++ii )
	{
		auto item_ii = m_PatternList[ii];
		if( item_ii )
		{
			copy_self->m_PatternList.emplace_back( dynamic_pointer_cast<IfcCurveStyleFontPattern>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcCurveStyleFont::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCURVESTYLEFONT" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_PatternList );
	stream << ");";
}
void IfcCurveStyleFont::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcCurveStyleFont::toString() const { return L"IfcCurveStyleFont"; }
void IfcCurveStyleFont::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCurveStyleFont, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	readEntityReferenceList( args[1], m_PatternList, map );
}
void IfcCurveStyleFont::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPresentationItem::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	if( !m_PatternList.empty() )
	{
		shared_ptr<AttributeObjectVector> PatternList_vec_object( new AttributeObjectVector() );
		std::copy( m_PatternList.begin(), m_PatternList.end(), std::back_inserter( PatternList_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "PatternList", PatternList_vec_object ) );
	}
}
void IfcCurveStyleFont::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcCurveStyleFont::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcCurveStyleFont::unlinkFromInverseCounterparts()
{
	IfcPresentationItem::unlinkFromInverseCounterparts();
}
