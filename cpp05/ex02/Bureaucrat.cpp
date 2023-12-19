/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:23:19 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/19 18:51:43 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const &src)
{
	out << src.getName() + ", bureaucrat grade " + std::to_string(src.getGrade());
	return out;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return (RED "Grade is too high" RESET);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return (RED "Grade is too low" RESET);
}


void Bureaucrat::signForm(AForm &b)
{
	try
	{
		b.beSigned(*this);
		std::cout << GREEN << this->_name << " signs " << b.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout <<  this->_name << RED << " cannot sign " << b.getName() << " because " << RESET << e.what() << std::endl;
	}
}

void  Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << GREEN << this->_name << " executes " << form.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout <<  this->_name << RED << " cannot execute " << form.getName() << " because " << RESET << e.what() << std::endl;
	}
}