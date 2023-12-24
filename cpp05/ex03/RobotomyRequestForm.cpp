/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:51:35 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/21 20:13:49 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout<< GREEN << "RobotomyRequestForm constructor called" << RESET<< std::endl;
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src)
{
	std::cout<< BLUE << "RobotomyRequestForm copy constructor called" << RESET<< std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "RobotomyRequestForm destructor called" << RESET << std::endl;	
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	std::cout<< BLUE << "RobotomyRequestForm Assignation operator called" << RESET<< std::endl;
	if (this != &src)
	{
		this->_target = src._target;
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::FTsignedE();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GTLowE();
	else
	{
		std::cout << BLUE << "* drilling noises *" << RESET <<std::endl;
		if (rand() % 2 == 0)
			std::cout << this->_target << " has been robotomized successfully." << std::endl;
		else
			std::cout << this->_target << " has not been robotomized successfully." << std::endl;
	}
}