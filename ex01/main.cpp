/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:20:02 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/13 19:00:55 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	std::string input;
	std::string name;
	int i = 0;
	Contact Contacts[8];

	while(1)
	{
		std::cout<< RED_TEXT << ">"<< RESET_TEXT;
		std::getline(std::cin, input);
		if(input == "EXIT")
			return(0);
		else if(input == "ADD")
		{
			std::cout << GREEN_TEXT <<"what is your first name ? " <<std::endl << RESET_TEXT << ">>";
			std::getline(std::cin, name);
			Contacts[i].setFirstName(name);
			std::cout << "what is your last name ? " << std::endl<< RESET_TEXT << ">>";
			std::getline(std::cin, name);
			Contacts[i].setLastName(name);
			std::cout << "what is your nickname ? " << std::endl << RESET_TEXT<< ">>";
			std::getline(std::cin, name);
			Contacts[i].setNickName(name);
			std::cout << "what is your phone number ? " << std::endl << RESET_TEXT<< ">>";
			std::getline(std::cin, name);
			Contacts[i].setPhoneNumber(name);
			std::cout << "what is your darkest secret ? " << std::endl<< RESET_TEXT << ">>";
			std::getline(std::cin, name);
			Contacts[i].setDarkestSecret(name);
			i++;
			std::cout<< YELLOW_TEXT << "Thanks for give us all information "<< RESET_TEXT << std::endl;
		}
		else if(input=="SEARCH")
		{
			std::cout << "give us the index of the contact u want to see ?" << std::endl;
			std::getline(std::cin, input);
			i = std::atoi(input.c_);
			if (i > 8)
			{
				std::cout << "Error" << std::endl;
				return(0);
			}
			std::cout << "the value of ur Contacts is " << Contacts[i].getFirstName() << std::endl;
		}
	}
	/*
	std::cout << "give us wish contacts u want to add ?" << std::endl;
	std::cin >> input;
	i = std::stoi(input);
	if (i > 8)
	{
		std::cout << "Error" << std::endl;
		return(0);
	}
	std::cout << "give us the First name of this " << std::endl;
	std::cin >> name;
	Contacts[i].setFirstName(name);
	std::cout <<"the value of ur Contacts is " << Contacts[i].getFirstName() << std::endl;
	*/
}