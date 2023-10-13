#include "PhoneBook.hpp"

void PhoneBook::setContact(Contact contact)
{
	this->contact = contact;
}


Contact PhoneBook::getContact()
{
	return (this->contact);
}