/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:24:23 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/19 18:34:00 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// int main()
// {
// 	Bureaucrat john("John", 2);
// 	Bureaucrat jim("Jim", 149);
// 	AForm form("form", 10, 1);
// 	try
// 	{
// 		std::cout << form << std::endl;
// 		form.beSigned(john);
// 		// john.incrementGrade();
// 		std::cout << form << std::endl;
// 		form.beSigned(jim);
// 		std::cout << form << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }
#include <iostream>

int main() {
    AForm form1("Form 1", 50, 100);
    AForm form2("Form 2", 75, 150);
	Bureaucrat b("yassine", 2);
	Bureaucrat b1("idrissi", 2);
    std::cout << form1 << std::endl;
    std::cout << form2 << std::endl;
    PresidentialPardonForm formP("formP");
    b.executeForm(formP);
    b.signForm(formP);
    try {
        
        std::cout << "Form 1 signed successfully!" << std::endl;
    } catch (std::exception &e) {
        std::cout << "Form 1 signing failed: " << e.what() << std::endl;
    }

    try {
        form2.beSigned(b1);
        std::cout << "Form 2 signed successfully!" << std::endl;
    } catch (std::exception &e) {
        std::cout << "Form 2 signing failed: " << e.what() << std::endl;
    }

    return 0;
}
// int main( void )
// {

//     try {
//         Bureaucrat bureaucrat("ash",9);
//         AForm form("formName", 10, 150);

//         bureaucrat.signForm(form);

//         std::cout << form << std::endl;
//     } catch (std::exception &e) {
//         std::cout << e.what() << std::endl;
//     }
//     return EXIT_SUCCESS;
// }