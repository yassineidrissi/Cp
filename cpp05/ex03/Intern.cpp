/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:41:15 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/25 01:10:06 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>


Intern::Intern()
{

	std::cout << GREEN << "Intern Default Constructor Called" << RESET << std::endl;
}

Intern::~Intern()
{
	std::cout << RED << "Intern Destructor Called" << RESET << std::endl;
}

Intern::Intern(Intern const & src)
{
	std::cout << GREEN << "Intern Copy Constructor Called" << RESET << std::endl;
	*this = src;
}

Intern & Intern::operator=(Intern const & src)
{
	std::cout << GREEN << "Intern Assignement Operator Called" << RESET << std::endl;
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

const char* Intern::FormDoesNotExistException::what() const throw()
{
	return ("Form Does Not Exist");
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string Name[] =
    {
		"PresidentialPardonForm",
		"RobotomyRequestForm",
		"ShrubberyCreationForm"
	};
	AForm *Form[] = 
	{
		new PresidentialPardonForm(target),
		new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target)
	};
	for(int i = 0; i < 3; i++)
	{
		if (Name[i] == name)
		{
			std::cout << GREEN << "Intern creates " << name << RESET << std::endl;
			return (Form[i]);
		}
	}
	throw Intern::FormDoesNotExistException();
}