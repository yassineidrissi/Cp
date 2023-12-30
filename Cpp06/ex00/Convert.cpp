/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:17:24 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/30 08:30:26 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

const char* ScalarConverter::MyException::what() const throw()
{
	return (RED "input is not printable" RESET);
};

void convert_char(std::string c)
{
	const char *s = c.c_str();
	std::cout << GREEN << "char : " << RESET << s << std::endl;
	std::cout << YELLOW << "int : " << RESET << static_cast<int>(s[0]) << std::endl;
	std::cout << GREEN << "float : " << RESET << static_cast<float>(s[0]) << std::endl;
	std::cout << YELLOW << "double : " << RESET << static_cast<double>(s[0]) << std::endl;

}

void convert_int(std::string n)
{
	const char * s = n.c_str(); 
	std::cout << GREEN << "char :" << RESET << static_cast<char>(std::atoi(s)) << std::endl;
	std::cout << YELLOW << "int : " << RESET << static_cast<int>(std::atoi(s))  << std::endl;
	std::cout << GREEN << "float :" << RESET << static_cast<float>(std::atoi(s)) << std::endl;
	std::cout << YELLOW << "double :" << RESET << static_cast<double>(std::atoi(s)) << std::endl;
}

void convert_fd(std::string fd)
{
	const char * s = fd.c_str();	
	std::cout << GREEN << "char :" << RESET << static_cast<char>(std::atof(s)) << std::endl;
	std::cout << YELLOW << "int : " << RESET << static_cast<int>(std::atof(s)) << std::endl;
	std::cout << GREEN << "float : " << RESET << std::atof(s) << std::endl;
	std::cout << GREEN << "double :" << RESET << static_cast<double>(std::atof(s)) << std::endl;
}

void convert_handl(std::string s)
{
	ScalarConverter::MyException exception;
	for(size_t i = 0; i < s.length(); i++)
	{
		if(!std::isdigit(s[i]))
		{
			if(i != s.length() - 1 && s[i] != 'f')
				throw exception.what();
			else
				convert_fd(s);
			
		}
	}
	convert_int(s);
}

void convert_node(std::string s)
{

	if(s.length() == 1 && std::isdigit(s[0]))
		convert_int(s);
	else if(s.length() == 1)
		convert_char(s);
	else
		convert_handl(s);
		
};

void ScalarConverter::convert(std::string s)
{
	for(size_t i = 0; i < s.length(); i++)
	{
		if(!std::isprint(s[i]))
		{
			ScalarConverter::MyException ex;
			throw ex.what();
		}
	}
	convert_node(s);
};