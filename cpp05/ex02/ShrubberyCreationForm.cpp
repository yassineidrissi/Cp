/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:51:07 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/14 15:39:32 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout<< GREEN << "ShrubberyCreationForm constructor called" << RESET<< std::endl;
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src)
{
	std::cout<< BLUE << "ShrubberyCreationForm copy constructor called" << RESET<< std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << "ShrubberyCreationForm destructor called" << RESET << std::endl;	
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	std::cout<< BLUE << "ShrubberyCreationForm Assignation operator called" << RESET<< std::endl;
	if (this != &src)
	{
		this->_target = src._target;
	}
	return (*this);
}


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getGradeToExecute() > 137 || this->getGradeToSign() > 145)
		throw AForm::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw AForm::FailToSignedException();
	// std::cout << "im inside execute" << std::endl;
	else
	{
		std::ofstream file;
		file.open(this->_target + "_shrubbery");
		file << "      /\\\n";
		file << "     /\\*\\\n";
		file << "    /\\O\\*\\\n";
		file << "   /*/\\/\\/\\\n";
		file << "  /\\O\\/\\*\\/\\\n";
		file << " /\\*\\/\\*\\/\\/\\\n";
		file << "/\\O\\/\\/*/\\/O/\\\n";
		file << "      ||\n";
		file << "      ||\n";
		file << "      ||\n";
		file << std::endl;
		file.close();
	}
	(void) executor;
	// if (this->getIsSigned() == false)
	// 	throw AForm::FormNotSignedException();
	// else if (executor.getGrade() > this->getGradeToExecute())
	// 	throw AForm::GradeTooLowException();
	// else
	// {
	// 	std::ofstream file;
	// 	file.open(this->_target + "_shrubbery");
	// 	file << "      /\\\n";
	// 	file << "     /\\*\\\n";
	// 	file << "    /\\O\\*\\\n";
	// 	file << "   /*/\\/\\/\\\n";
	// 	file << "  /\\O\\/\\*\\/\\\n";
	// 	file << " /\\*\\/\\*\\/\\/\\\n";
	// 	file << "/\\O\\/\\/*/\\/O/\\\n";
	// 	file << "      ||\n";
	// 	file << "      ||\n";
	// 	file << "      ||\n";
	// 	file << std::endl;
	// 	file.close();
	// }
}