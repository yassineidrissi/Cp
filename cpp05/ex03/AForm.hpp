/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:01:38 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/16 23:07:23 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm
{
	private:
		std::string name;
		bool isSigned;
		int gradeToSign;
		int gradeToExecute;
	public:
		AForm();
		~AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(AForm const & src);
		AForm & operator=(AForm const & src);
		std::string getName() const;
		bool getIsSigned() const;
		void signForm(Bureaucrat &b);
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(Bureaucrat &bureaucrat);//! i don't know how why i used here
		virtual void execute(Bureaucrat const &executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return (YELLOW "Grade is too high" RESET);
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return (YELLOW "Grade is too low" RESET);
				}
		};
	 
};
std::ostream &operator<<(std::ostream &output, const AForm &AForm);