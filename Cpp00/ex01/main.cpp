/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:20:02 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/14 14:21:48 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	getword(std::string const& string)
{
	return string.size() <= 10 ? string : string.substr(0, 9) + ".";
}

std::string getstring(int i)
{
	if (i == 0)     return  " first  name  ";
	else if(i == 1) return  " last   name  ";
	else if (i == 2) return "  Nickname    ";
	else if (i == 3) return "Phone  number ";
	else if (i == 4) return "Darkest secret";
	else return "Error\n";
}

std::string skip(std::string str)
{
	int i = 0;
	int j = str.length() -1;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while (j > 0 && (str[j] == ' ' && str[j] == '\t') )
		j--;
	return str.substr(i, j - i + 1);
}

std::string SetFunctions(PhoneBook *pb, int index)
{
	int i = 0;
	std::string name;
	while(i < 5 && !std::cin.eof())
	{
		std::cout << GREEN_TEXT <<"what is your " << getstring(i) << " ? " <<std::endl << RESET_TEXT << ">>";
		std::getline(std::cin, name);
		name  = skip(name);
		i += pb->SetContact(index, i, name);
	}
	if (std::cin.eof())
		return "EXIT";
	else if (!index)
		std::cout << YELLOW_TEXT << "THANKS FOR GIVING US YOUR INFORMATIONS 🤫"<< RESET_TEXT << std::endl;
	return "";
}

std:: string GetFunctions(PhoneBook *pb, int nb)
{
		std::string input;
		std::cout<<GREEN_TEXT << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|"  << std::endl;
		for(int j = 0; j < nb && j < 8; j++)
		{
			std::cout << std::setw(10) << j+ 1 << "|";
			for(int n = 0; n < 3; n++)
				std::cout << std::setw(10) << getword(pb->GetContact(j, n)) << "|";
			std::cout << std::endl;
		}
		std::cout << std::endl << "     ***CHOSE THE INDEX OF THE CONATCT ?***" << std::endl << RESET_TEXT<<">>";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return "EXIT";
		int h = std::atoi(input.c_str());
		if (h < 1 || h > 8 || h > nb )
		{
			std::cout<< RED_TEXT << "Error" << std::endl << "Wrong number" << RESET_TEXT << std::endl;
			return "wrong number";
		}
		for(int l = 0; l < 5 ; l++)
			std::cout << " the value of your " << getstring(l) << " is : " << YELLOW_TEXT << std::setw(1) <<  pb->GetContact(h - 1, l) << RESET_TEXT << std::endl;
		return "SUCSSES";
}

int main()
{
	std::string input;
	int i = 0;
	int k = 0;
	int h = 0;
	int nb = 0;
	(void)k;
	(void)h;
	PhoneBook pb;

	while(1)
	{
		if(input != "EXIT")
			std::cout<< BLUE_TEXT << "INSERT COMMAND > "<< RESET_TEXT;
		std::getline(std::cin, input);
		if(input == "ADD")
		{
			if(i < 8)
				nb++;
			else
				i = 0;
			input = SetFunctions(&pb, i++);
		}
		else if(input=="SEARCH")
			input = GetFunctions(&pb, nb);
		else if(std::cin.eof() || input == "EXIT")
			return (std::cout << RED_TEXT << "exit" << RESET_TEXT << std::endl, 0);
	}
}