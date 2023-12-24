/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:01:30 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/19 17:05:18 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//!*********** Constacturs ************//

AForm::AForm(): _name("default"), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << GREEN << "Form Default Constructor Called" << RESET << std::endl;
	this->_isSigned = false;
}

AForm::AForm(AForm const & src): _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    std::cout << GREEN << "Form Copy Constructor Called" << RESET << std::endl;
}

AForm::AForm(std::string name, int gradeTosign, int gradeToExecute): _name(name), _gradeToSign(gradeTosign),_gradeToExecute(gradeToExecute)
{
    std::cout << GREEN << "Form Constructor Cal" << RESET << std::endl;
}

AForm::~AForm()
{
	std::cout << RED << "Form Destructor Called" << RESET << std::endl;
}

// !*********** Functions ************//

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToExecute())
		throw AForm::GTLowE();
	else
		this->_isSigned = true;
}

AForm & AForm::operator=(AForm const & src)
{
	std::cout << BLUE << "Form Assignation Operator Called" << RESET << std::endl;
	this->_isSigned = src._isSigned;
	return (*this);
}

//! *********** getters ************//

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

const char* AForm::GTHighE::what() const throw()
{
	return (RED "Grade is too high" RESET);
}


const char* AForm::GTLowE::what() const throw()
{
	return (RED "Grade is too low" RESET);
}

const char* AForm::FailToExecuteException::what() const throw()
{
	return (RED "AForm is already signed" RESET);
}

const char* AForm::FTsignedE::what() const throw()
{
	return (RED "AForm is not signed" RESET);
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::FTsignedE();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GTLowE();
	else
		std::cout << executor.getName() << " executes " << this->getName() << std::endl;
}