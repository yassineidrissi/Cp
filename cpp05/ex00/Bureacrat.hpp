/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureacrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:07:46 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/11 14:55:44 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <exception>

class Bureauacrat
{
	private:
		std::string name;
		int grade;
	public:
		Bureauacrat();
		Bureauacrat(std::string name, int grade);
		Bureauacrat(Bureauacrat const & src);
		Bureauacrat & operator=(Bureauacrat const & src);
		~Bureauacrat();
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade(); 
}
