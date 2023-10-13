/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:30:30 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/13 19:30:37 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string firstName)
{
	//std::string firstName = firstName;
	this->firstName = firstName;
}

std::string Contact::getFirstName()
{
	return (this->firstName);
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

std::string Contact::getNickName()
{
	return (this->nickName);
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}

Contact::Contact()
{
}

Contact::~Contact()
{
}