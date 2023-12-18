/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:01:38 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/18 23:19:05 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
	public:
		Form();
		~Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const & src);
		Form & operator=(Form const & src);
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void setisSigned(bool setisSigned);
		void beSigned(Bureaucrat &bureaucrat);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class FailToSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	 	class FailToExecuteException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		}
};
std::ostream &operator<<(std::ostream &output, const Form &Form);