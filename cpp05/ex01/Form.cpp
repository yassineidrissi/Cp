/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:01:30 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/18 23:28:32 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//!*********** Constacturs ************//

Form::Form(): _name("default"), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << GREEN << "Form Default Constructor Called" << RESET << std::endl;
	this->_isSigned = false;
}

Form::Form(Form const & src): _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    std::cout << GREEN << "Form Copy Constructor Called" << RESET << std::endl;
}

Form::Form(std::string name, int gradeTosign, int gradeToExecute): _name(name), _gradeToSign(gradeTosign),_gradeToExecute(gradeToExecute)
{
    std::cout << GREEN << "Form Constructor Cal" << RESET << std::endl;
}

Form::~Form()
{
	std::cout << RED << "Form Destructor Called" << RESET << std::endl;
}

//!*********** Functions ************//

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToExecute())
	{
		throw Form::FailToSignedException();
	}
	else
	{
		this->_isSigned = true;
	}
}

Form & Form::operator=(Form const & src)
{
	std::cout << BLUE << "Form Assignation Operator Called" << RESET << std::endl;
	this->_isSigned = src._isSigned;
	return (*this);
}

//!*********** getters ************//

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getIsSigned() const
{
	return (this->_isSigned);
}


int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

std::ostream &operator<<(std::ostream &output, const Form &form)
{
	output << "Form name is :" <<  BLUE << form.getName()<< RESET << std::endl;
	return (output);
}

void Form::setisSigned(bool isSigned)
{
	this->_isSigned = isSigned;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return (RED "Grade is too high" RESET);
}


const char* Form::GradeTooLowException::what() const throw()
{
	return (RED "Grade is too low" RESET);
}

const char* Form::FailToExecuteException::what() const throw()
{
	return (RED "Form is already signed" RESET);
}

const char* Form::FailToSignedException::what() const throw()
{
	return (RED "Form is not signed" RESET);
}