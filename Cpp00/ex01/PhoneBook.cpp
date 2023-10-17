/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:33:13 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/14 22:54:20 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

int PhoneBook::SetContact(int index,int parm, std::string name)
{

	if(name == "")
	{
		if(std::cin.eof())
			return (std::cout <<std::endl, -1);
		std::cout <<RED_TEXT << getstring(-1) << "There is no pararmetre"<< std::endl << RESET_TEXT;
		return 0;
	}
	else if(!parm)
		this->contact[index].setFirstName(name);
	else if (parm == 1)
		this->contact[index].setLastName(name);
	else if (parm == 2)
		this->contact[index].setNickName(name);
	else if (parm == 3)
		this->contact[index].setPhoneNumber(name);
	else if (parm == 4)
		this->contact[index].setDarkestSecret(name);
	return 1;
}

std::string PhoneBook::GetContact(int index, int parm)
{
	if(!parm)
		return this->contact[index].getFirstName();
	else if (parm == 1)
		return this->contact[index].getLastName();
	else if (parm == 2)
		return this->contact[index].getNickName();
	else if (parm == 3)
		return this->contact[index].getPhoneNumber();
	else if (parm == 4)
		return this->contact[index].getDarkestSecret();
	else
		return getstring(-1);
}
