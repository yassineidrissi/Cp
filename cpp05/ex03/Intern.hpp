/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:42:34 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/18 23:43:42 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

class Intern
{
	private:
		/* data */
	public:
		Intern();
		~Intern();
		Intern(Intern const & src);
		Intern & operator=(Intern const & src);
		Form *makeForm(std::string name, std::string target);
		class FormDoesNotExistException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return (RED "Form does not exist" RESET);
				}
		};
};