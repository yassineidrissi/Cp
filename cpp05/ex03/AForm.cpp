/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:01:30 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/16 23:02:38 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
{
	std::cout << GREEN << "AForm Default Constructor Called" << RESET << std::endl;
	this->name = "default";
	this->isSigned = false;
	this->gradeToSign = 150;
	this->gradeToExecute = 150;
}

AForm::AForm(AForm const & src)
{
	std::cout << GREEN << "AForm Copy Constructor Called" << RESET << std::endl;
	this->name = src.name;
	this->isSigned = src.isSigned;
	this->gradeToExecute = src.gradeToExecute;
	*this = src;
}

AForm::AForm(std::string name, int gradeTosign, int gradeToExecute)
{
	std::cout << GREEN << "AForm Constructor Called" << RESET << std::endl;
	this->name = name;
	this->isSigned = false;
	this->gradeToSign = gradeTosign;
	this->gradeToExecute = gradeToExecute;
}

AForm::~AForm()
{
	std::cout << RED << "AForm Destructor Called" << RESET << std::endl;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
	{
		throw AForm::GradeTooLowException();
	}
	else
	{
		this->isSigned = true;
	}
}

AForm & AForm::operator=(AForm const & src)
{
	std::cout << BLUE << "AForm Assignation Operator Called" << RESET << std::endl;
	this->isSigned = src.isSigned;
	return (*this);
}


bool AForm::getIsSigned() const
{
	return (this->isSigned);
}

std::string AForm::getName() const
{
	return (this->name);
}

std::ostream &operator<<(std::ostream &output, const AForm &AForm)
{
	output << "AForm name is :" <<  BLUE << AForm.getName()<< RESET << std::endl;
	return (output);
}

void AForm::signForm(Bureaucrat &b)
{
	if (!this->isSigned)
	{
		std::cout << b.getName() << RED <<" couldn’t sign " << this->name << RESET << std::endl;
		throw AForm::GradeTooLowException();
	}
	else
	{
		std::cout << b.getName() << GREEN <<" is signed " << this->name << RESET << std::endl;
		this->isSigned = true;
	}
}

int AForm::getGradeToExecute() const
{
	return (this->gradeToSign);
}