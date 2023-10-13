/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:33:13 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/13 23:55:44 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::SetContact(PhoneBook *pb, int *index)
{
	std::stirng name;
	int none = 0;
	std::cout << GREEN_TEXT <<"what is your first name ? " <<std::endl << RESET_TEXT << ">>";
	std::getline(std::cin, name);
	this->contact[*index].setFirstName(name);
	pb->contact[i].setFirstName(name);
	std::cout << GREEN_TEXT <<"what is your last name ? " << std::endl<< RESET_TEXT << ">>";
	std::getline(std::cin, name);
	pb->contact[i].setLastName(name);
	std::cout << GREEN_TEXT <<"what is your nickname ? " << std::endl << RESET_TEXT<< ">>";
	std::getline(std::cin, name);
	pb->contact[i].setNickName(name);
	std::cout << GREEN_TEXT <<"what is your phone number ? " << std::endl << RESET_TEXT<< ">>";
	std::getline(std::cin, name);
	pb->contact[i].setPhoneNumber(name);
	std::cout << GREEN_TEXT <<"what is your darkest secret ? " << std::endl<< RESET_TEXT << ">>";
	std::getline(std::cin, name);
	pb->contact[i].setDarkestSecret(name);
	if(pb->contact[i].getFirst() && pb->contact[i].getLastName() && pb->contact[i].getNickName() && pb->contact[i].getDarketSecret())
		*index++;
	else
		std::cout << RED_TEXT << "Error" << std::endl << "you must fill all the fields" << std::endl;
}

void PhoneBook::PrintContact(std::string Name, int index, int varName)
{
	if (varName == 0)
		std::cout << std::setw(10) << index << "|";
	else
		std::cout << std::setw(10) << Name << "|";
}