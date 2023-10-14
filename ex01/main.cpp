/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:20:02 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/13 23:49:38 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	getword(std::string const& string)
{
	return string.size() <= 10 ? string : string.substr(0, 9) + ".";
}

std::string getstring(int i)
{
	if (i == 0) return "first name";
	else if(i == 1) return "last name";
	else if (i == 2) return "nickname";
	else if (i == 3) return "phone number";
	else if (i == 4) return "darkest secret";
	else return "Error";
}

void getfunctions(PhoneBook *pb, int index)
{
	int i = 0;
	std::string name;
	while(i < 5 && !std::cin.eof())
	{
		std::cout << GREEN_TEXT <<"what is your " << getstring(i) << " ? " <<std::endl << RESET_TEXT << ">>";
		std::getline(std::cin, name);
		i += pb->SetContact(index, i, name);
	}
}

int main()
{
	std::string input;
	int i = 0;
	int k = 0;
	int h = 0;
	(void)k;
	(void)h;
	PhoneBook pb;

	while(1)
	{
		std::cout<< RED_TEXT << "INSERT COMMAND >"<< RESET_TEXT;
		std::getline(std::cin, input);
		if(input == "EXIT" || std::cin.eof())
			return(0);
		else if(input == "ADD")
			getfunctions(&pb, i++);
		// else if(input=="SEARCH")
		// {
		// 	std::cout<<GREEN_TEXT << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::setw(10) <<"Phone Num" << "|" << std::setw(10) << "darkest Se"<< "|" << std::endl;
		// 	for(int j = 0; j < i; j++)
		// 	{
		// 		std::cout << std::setw(10) << j + 1 << "|" << std::setw(10) << getword(pb.contact[j].getFirstName()) << "|" << std::setw(10) << getword(pb.contact[j].getLastName()) << "|" << std::setw(10) << getword(pb.contact[j].getNickName()) << "|" << std::setw(10) << getword(pb.contact[j].getPhoneNumber()) << "|" << std::setw(10) << getword(pb.contact[j].getDarkestSecret()) << "|" << std::endl;
		// 	}
		// 	std::cout << std::endl <<"give us the index of the pb.contact u want to see ?" << std::endl << RESET_TEXT<<">>";
		// 	std::getline(std::cin, input);
		// 	h = std::atoi(input.c_str());
		// 	if (h < 1 || h > 8 || h > i)
		// 	{
		// 		std::cout << "Error" << std::endl << "Wrong number" << std::endl;
		// 		continue;
		// 	}
		// 	std::cout << "the value of ur " << getstring(k++) << " is:     " << BLUE_TEXT << std::setw(2) << pb.contact[h - 1].getFirstName() << RESET_TEXT << std::endl;
		// 	std::cout << "the value of ur " << getstring(k++) << " is:      " << BLUE_TEXT << std::setw(2) << pb.contact[h - 1].getLastName() << RESET_TEXT << std::endl;
		// 	std::cout << "the value of ur " << getstring(k++) << " is:       " << BLUE_TEXT << std::setw(2) << pb.contact[h - 1].getNickName() << RESET_TEXT << std::endl;
		// 	std::cout << "the value of ur " << getstring(k++) << " is:   " << BLUE_TEXT << std::setw(2) << pb.contact[h - 1].getPhoneNumber() << RESET_TEXT << std::endl;
		// 	std::cout << "the value of ur " << getstring(k++) << " is: " << BLUE_TEXT << std::setw(2) << pb.contact[h - 1].getDarkestSecret() << RESET_TEXT << std::endl;
		// }
	}
			// pb->contact[i].setFirstName(name);
			// std::cout << GREEN_TEXT <<"what is your last name ? " << std::endl<< RESET_TEXT << ">>";
			// std::getline(std::cin, name);
			// pb->contact[i].setLastName(name);
			// std::cout << GREEN_TEXT <<"what is your nickname ? " << std::endl << RESET_TEXT<< ">>";
			// std::getline(std::cin, name);
			// pb->contact[i].setNickName(name);
			// std::cout << GREEN_TEXT <<"what is your phone number ? " << std::endl << RESET_TEXT<< ">>";
			// std::getline(std::cin, name);
			// pb->contact[i].setPhoneNumber(name);
			// std::cout << GREEN_TEXT <<"what is your darkest secret ? " << std::endl<< RESET_TEXT << ">>";
			// std::getline(std::cin, name);
			// pb->contact[i].setDarkestSecret(name);
			// if(pb->contact[i].getFirst() && pb->contact[i].getLastName() && pb->contact[i].getNickName() && pb->contact[i].getDarketSecret())
			// 	index++;
			// pb.SetContact(name, i++);
	/*
	std::cout << "give us wish pb.contact u want to add ?" << std::endl;
	std::cin >> input;
	i = std::stoi(input);
	if (i > 8)
	{
		std::cout << "Error" << std::endl;
		return(0);
	}
	std::cout << "give us the First name of this " << std::endl;
	std::cin >> name;
	pb.contact[i].setFirstName(name);
	std::cout <<"the value of ur pb.contact is " << pb.contact[i].getFirstName() << std::endl;
	*/
}

// if (std::cin.endf() == std::cin)