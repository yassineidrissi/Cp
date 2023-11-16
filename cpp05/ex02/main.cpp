/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:55:02 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/15 15:17:21 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat bureaucrat1("John", 2);
    Bureaucrat bureaucrat2("Jane", 50);

    ShrubberyCreationForm shrubberyForm("Home");
    RobotomyRequestForm robotomyForm("Target");
    PresidentialPardonForm pardonForm("Criminal");

    std::cout << shrubberyForm << std::endl;
    std::cout << robotomyForm << std::endl;
    std::cout << pardonForm << std::endl;

    try {
        shrubberyForm.beSigned(bureaucrat1);
        robotomyForm.beSigned(bureaucrat2);
        pardonForm.beSigned(bureaucrat1);
        std::cout << "Forms signed successfully!" << std::endl;
    } catch (std::exception &e) {
        std::cout << "Form signing failed: " << e.what() << std::endl;
    }

    try {
        // bureaucrat1.e executeForm(shrubberyForm);
        // bureaucrat2.executeForm(robotomyForm);
        // bureaucrat1.executeForm(pardonForm);
        std::cout << "Forms executed successfully!" << std::endl;
    } catch (std::exception &e) {
        std::cout << "Form execution failed: " << e.what() << std::endl;
    }

    return 0;
}