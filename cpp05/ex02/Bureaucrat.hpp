/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:07:46 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/12 18:39:13 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <exception>

#define RED "\033[0;31m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"



class Bureaucrat
{
	private:
		std::string name;
		int grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		
		Bureaucrat & operator=(Bureaucrat const & src);
		void incrementGrade();
		void decrementGrade();
		std::string getName() const;
		int getGrade() const;
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return (RED "Grade is too high" RESET);
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return (RED "Grade is too low" RESET);
				}
		};
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &bureaucrat);
