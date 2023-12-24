/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:52:03 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/21 20:13:15 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout<< GREEN << "PresidentialPardonForm constructor called" << RESET<< std::endl;
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src)
{
	std::cout<< BLUE << "PresidentialPardonForm copy constructor called" << RESET<< std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "PresidentialPardonForm destructor called" << RESET << std::endl;	
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	std::cout<< BLUE << "PresidentialPardonForm Assignation operator called" << RESET<< std::endl;
	if (this != &src)
	{
		this->_target = src._target;
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	std::cout << GREEN << std::endl << "Executive " << RESET << std::endl ;
	if (this->getIsSigned() == false)
		throw AForm::GTHighE();// changet to getGarde To sign
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GTLowE();
	else
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}