/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:24:23 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/21 16:56:12 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
//! verfied all //! comments
int main() {
    // AForm form1("Form 1", 50, 100);
    // AForm form2("Form 2", 75, 150);
	Bureaucrat b("yassine", 2);
	// Bureaucrat b1("idrissi", 2);
    // std::cout << form1 << std::endl;
    // std::cout << form2 << std::endl;
    PresidentialPardonForm formP("formP");
	// RobotomyRequestForm formR("form R");
	// ShrubberyCreationForm formS("form Sh");
    b.signForm(formP);
    // b.signForm(formR);
	b.executeForm(formP);
    // b.executeForm(formP);
    // b.executeForm(formS);
	// {
    try {
        
        std::cout << "Form 1 signed successfully!" << std::endl;
    } catch (std::exception &e) {
        std::cout << "Form 1 signing failed: " << e.what() << std::endl;
    }

    return 0;
}
