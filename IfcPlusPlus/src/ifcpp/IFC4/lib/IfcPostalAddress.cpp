/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAddressTypeEnum.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOrganization.h"
#include "ifcpp/IFC4/include/IfcPerson.h"
#include "ifcpp/IFC4/include/IfcPostalAddress.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcPostalAddress 
IfcPostalAddress::IfcPostalAddress( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcPostalAddress::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPostalAddress> copy_self( new IfcPostalAddress() );
	if( m_Purpose ) { copy_self->m_Purpose = dynamic_pointer_cast<IfcAddressTypeEnum>( m_Purpose->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_UserDefinedPurpose ) { copy_self->m_UserDefinedPurpose = dynamic_pointer_cast<IfcLabel>( m_UserDefinedPurpose->getDeepCopy(options) ); }
	if( m_InternalLocation ) { copy_self->m_InternalLocation = dynamic_pointer_cast<IfcLabel>( m_InternalLocation->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_AddressLines.size(); ++ii )
	{
		auto item_ii = m_AddressLines[ii];
		if( item_ii )
		{
			copy_self->m_AddressLines.emplace_back( dynamic_pointer_cast<IfcLabel>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_PostalBox ) { copy_self->m_PostalBox = dynamic_pointer_cast<IfcLabel>( m_PostalBox->getDeepCopy(options) ); }
	if( m_Town ) { copy_self->m_Town = dynamic_pointer_cast<IfcLabel>( m_Town->getDeepCopy(options) ); }
	if( m_Region ) { copy_self->m_Region = dynamic_pointer_cast<IfcLabel>( m_Region->getDeepCopy(options) ); }
	if( m_PostalCode ) { copy_self->m_PostalCode = dynamic_pointer_cast<IfcLabel>( m_PostalCode->getDeepCopy(options) ); }
	if( m_Country ) { copy_self->m_Country = dynamic_pointer_cast<IfcLabel>( m_Country->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPostalAddress::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPOSTALADDRESS" << "(";
	if( m_Purpose ) { m_Purpose->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_UserDefinedPurpose ) { m_UserDefinedPurpose->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_InternalLocation ) { m_InternalLocation->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_AddressLines.size() > 0 )
	{
		stream << "(";
		for( size_t ii = 0; ii < m_AddressLines.size(); ++ii )
		{
			if( ii > 0 )
			{
				stream << ",";
			}
			const shared_ptr<IfcLabel>& type_object = m_AddressLines[ii];
			if( type_object )
			{
				type_object->getStepParameter( stream, false );
			}
			else
			{
				stream << "$";
			}
		}
		stream << ")";
	}
	else { stream << "$"; }
	stream << ",";
	if( m_PostalBox ) { m_PostalBox->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Town ) { m_Town->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Region ) { m_Region->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PostalCode ) { m_PostalCode->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Country ) { m_Country->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcPostalAddress::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPostalAddress::toString() const { return L"IfcPostalAddress"; }
void IfcPostalAddress::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 10 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPostalAddress, expecting 10, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Purpose = IfcAddressTypeEnum::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	m_UserDefinedPurpose = IfcLabel::createObjectFromSTEP( args[2], map );
	m_InternalLocation = IfcLabel::createObjectFromSTEP( args[3], map );
	readTypeOfStringList( args[4], m_AddressLines );
	m_PostalBox = IfcLabel::createObjectFromSTEP( args[5], map );
	m_Town = IfcLabel::createObjectFromSTEP( args[6], map );
	m_Region = IfcLabel::createObjectFromSTEP( args[7], map );
	m_PostalCode = IfcLabel::createObjectFromSTEP( args[8], map );
	m_Country = IfcLabel::createObjectFromSTEP( args[9], map );
}
void IfcPostalAddress::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcAddress::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "InternalLocation", m_InternalLocation ) );
	if( !m_AddressLines.empty() )
	{
		shared_ptr<AttributeObjectVector> AddressLines_vec_object( new AttributeObjectVector() );
		std::copy( m_AddressLines.begin(), m_AddressLines.end(), std::back_inserter( AddressLines_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "AddressLines", AddressLines_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "PostalBox", m_PostalBox ) );
	vec_attributes.emplace_back( std::make_pair( "Town", m_Town ) );
	vec_attributes.emplace_back( std::make_pair( "Region", m_Region ) );
	vec_attributes.emplace_back( std::make_pair( "PostalCode", m_PostalCode ) );
	vec_attributes.emplace_back( std::make_pair( "Country", m_Country ) );
}
void IfcPostalAddress::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcAddress::getAttributesInverse( vec_attributes_inverse );
}
void IfcPostalAddress::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcAddress::setInverseCounterparts( ptr_self_entity );
}
void IfcPostalAddress::unlinkFromInverseCounterparts()
{
	IfcAddress::unlinkFromInverseCounterparts();
}
