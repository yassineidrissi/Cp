/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:01:30 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/16 18:56:56 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//!*********** Constacturs ************//

Form::Form()
{
	std::cout << GREEN << "Form Default Constructor Called" << RESET << std::endl;
	this->name = "default";
	this->isSigned = false;
	this->gradeToSign = 150;
	this->gradeToExecute = 150;
}

Form::Form(Form const & src)
{
	std::cout << GREEN << "Form Copy Constructor Called" << RESET << std::endl;
	this->name = src.name;
	this->isSigned = src.isSigned;
	this->gradeToExecute = src.gradeToExecute;
	*this = src;
}

Form::Form(std::string name, int gradeTosign, int gradeToExecute)
{
	std::cout << GREEN << "Form Constructor Cal" << RESET << std::endl;
	this->name = name;
	this->isSigned = false;
	this->gradeToSign = gradeTosign;
	this->gradeToExecute = gradeToExecute;
}

Form::~Form()
{
	std::cout << RED << "Form Destructor Called" << RESET << std::endl;
}

//!*********** Functions ************//

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		this->isSigned = true;
	}
}

Form & Form::operator=(Form const & src)
{
	std::cout << BLUE << "Form Assignation Operator Called" << RESET << std::endl;
	this->isSigned = src.isSigned;
	return (*this);
}

//!*********** getters ************//

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getIsSigned() const
{
	return (this->isSigned);
}


int Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

std::ostream &operator<<(std::ostream &output, const Form &form)
{
	output << "Form name is :" <<  BLUE << form.getName()<< RESET << std::endl;
	return (output);
}

void Form::signForm(Bureaucrat &b)
{
	if (!this->isSigned)
	{
		std::cout << b.getName() << RED <<" couldn’t sign " << this->name << RESET << std::endl;
		throw Form::GradeTooLowException();
	}
	else
	{
		std::cout << b.getName() << GREEN <<" is signed " << this->name << RESET << std::endl;
		this->isSigned = true;
	}
}