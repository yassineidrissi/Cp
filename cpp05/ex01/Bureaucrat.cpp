/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:23:19 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/21 20:13:15 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GTHighE();
	else if (grade > 150)
		throw Bureaucrat::GTLowE();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src._name)
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->_name << " is dead" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	if (this != &src)
		this->_grade = src._grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GTHighE();
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GTLowE();
	else
		this->_grade++;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const &src)
{
	out << src.getName() + ", bureaucrat grade " + std::to_string(src.getGrade());
	return out;
}

const char* Bureaucrat::GTHighE::what() const throw()
{
	return (RED "Grade is too high" RESET);
}

const char* Bureaucrat::GTLowE::what() const throw()
{
	return (RED "Grade is too low" RESET);
}


void Bureaucrat::signForm(Form &b)
{
	if (!b.getIsSigned())
	{
		std::cout << this->getName() << RED <<" couldn’t sign " <<  b.getName() << " because " << RESET << std::endl;
		throw Form::GTLowE();
	}
	else
	{
		std::cout << this->getName() << GREEN <<" signed by " << b.getName() << RESET << std::endl;
	}
}
