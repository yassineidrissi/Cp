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
	if (this->getIsSigned() == false)
		throw AForm::FTsignedE();
	else if (this->getGradeToExecute() < executor.getGrade())
		throw AForm::GTLowE();
	else
	{
		std::ofstream file;
		file.open(this->_target + "_shrubbery");
        file << "\033[32m        /\\\n";
        file << "       /\\*\\\n";
        file << "      /\\O\\*\\\n";
        file << "     /*/\\/\\/\\\n";
        file << "    /\\O\\/\\*\\/\\\n";
        file << "   /\\*\\/\\*\\/\\/\\\n";
        file << "  /\\O\\/\\/*/\\/O/\\\n";
        file << "\033[33m        ||\n";
        file << "        ||\n";
        file << "        ||\n";
        file << "       /||\\\n";
        file << "      //||\\\\\n";
        file << "     // || \\\\\n";
        file << "    //  ||  \\\\\n";
        file << "   //   ||   \\\\\n";
        file << "  //    ||    \\\\\n";
        file << " //     ||     \\\\\n";
        file << "// 1337 || 1337 \\\\\n";
        file << "        ||\n";
        file << "        ||\n";
        file << "        ||\n";
        file << "\033[0m" << std::endl;
        file << std::endl;
        file.close();
	}
}