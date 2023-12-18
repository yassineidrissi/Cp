/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:01:30 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/18 14:31:53 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//!*********** Constacturs ************//

AForm::AForm(): _name("default"), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << GREEN << "AForm Default Constructor Called" << RESET << std::endl;
	this->_isSigned = false;
}

AForm::AForm(AForm const & src): _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    std::cout << GREEN << "AForm Copy Constructor Called" << RESET << std::endl;
}

AForm::AForm(std::string name, int gradeTosign, int gradeToExecute): _name(name), _gradeToSign(gradeTosign),_gradeToExecute(gradeToExecute)
{
    std::cout << GREEN << "AForm Constructor Cal" << RESET << std::endl;
}

AForm::~AForm()
{
	std::cout << RED << "AForm Destructor Called" << RESET << std::endl;
}

//!*********** Functions ************//

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToExecute())
	{
		throw AForm::GradeTooLowException();
	}
	else
	{
		this->_isSigned = true;
	}
}

AForm & AForm::operator=(AForm const & src)
{
	std::cout << BLUE << "AForm Assignation Operator Called" << RESET << std::endl;
	this->_isSigned = src._isSigned;
	return (*this);
}

//!*********** getters ************//

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getIsSigned() const
{
	return (this->_isSigned);
}


int AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

std::ostream &operator<<(std::ostream &output, const AForm &AForm)
{
	output << "AForm name is :" <<  BLUE << AForm.getName()<< RESET << std::endl;
	return (output);
}

void AForm::setisSigned(bool isSigned)
{
	this->_isSigned = isSigned;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return (RED "Grade is too high" RESET);
}


const char* AForm::GradeTooLowException::what() const throw()
{
	return (RED "Grade is too low" RESET);
}