/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:41:56 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/15 18:06:06 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << GREEN << "Bureaucrat Default Constructor Called" << RESET << std::endl;
	this->name = "default";
	this->grade = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << GREEN << "Bureaucrat Copy Constructor Called" << RESET << std::endl;
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	std::cout << GREEN << "Bureaucrat Constructor Called" << RESET << std::endl;
	this->name = name;
	this->grade = grade;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	std::cout << BLUE << "Bureaucrat Assignation Operator Called" << RESET << std::endl;
	this->grade = src.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Bureaucrat Destructor Called" << RESET << std::endl;
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &bureaucrat)
{
	output << GREEN << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << RESET << std::endl;
	return (output);
}
std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	std::cout << "incrementGrade To :"<< this->grade << std::endl;
	if (this->grade == 150)
		throw GradeTooHighException();
	this->grade++;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade == 1)
		throw GradeTooLowException();
	this->grade--;
}

