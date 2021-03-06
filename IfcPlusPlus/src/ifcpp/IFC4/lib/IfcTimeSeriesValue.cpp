/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcTimeSeriesValue.h"
#include "ifcpp/IFC4/include/IfcValue.h"

// ENTITY IfcTimeSeriesValue 
IfcTimeSeriesValue::IfcTimeSeriesValue( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcTimeSeriesValue::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTimeSeriesValue> copy_self( new IfcTimeSeriesValue() );
	for( size_t ii=0; ii<m_ListValues.size(); ++ii )
	{
		auto item_ii = m_ListValues[ii];
		if( item_ii )
		{
			copy_self->m_ListValues.emplace_back( dynamic_pointer_cast<IfcValue>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcTimeSeriesValue::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTIMESERIESVALUE" << "(";
	stream << "(";
	for( size_t ii = 0; ii < m_ListValues.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcValue>& type_object = m_ListValues[ii];
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
void IfcTimeSeriesValue::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTimeSeriesValue::toString() const { return L"IfcTimeSeriesValue"; }
void IfcTimeSeriesValue::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTimeSeriesValue, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readSelectList( args[0], m_ListValues, map );
}
void IfcTimeSeriesValue::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	if( !m_ListValues.empty() )
	{
		shared_ptr<AttributeObjectVector> ListValues_vec_object( new AttributeObjectVector() );
		std::copy( m_ListValues.begin(), m_ListValues.end(), std::back_inserter( ListValues_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "ListValues", ListValues_vec_object ) );
	}
}
void IfcTimeSeriesValue::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IfcTimeSeriesValue::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcTimeSeriesValue::unlinkFromInverseCounterparts()
{
}
