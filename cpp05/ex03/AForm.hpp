/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:01:38 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/19 15:50:53 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
	public:
		AForm();
		~AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(AForm const & src);
		AForm & operator=(AForm const & src);
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void setisSigned(bool setisSigned);
		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const;
		class GTHighE : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GTLowE : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class FTsignedE : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	 	class FailToExecuteException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
std::ostream &operator<<(std::ostream &output, const AForm &AForm);