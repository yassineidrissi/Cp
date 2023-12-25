/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:24:23 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/25 23:25:52 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
//! verfied all //! comments
int main() {

	Bureaucrat b("yassine", 2);
    ShrubberyCreationForm formP("formS");
    formP.beSigned(b);
    try {
        
        b.signForm(formP);
        std::cout << "Form 1 signed successfully!" << std::endl;
        formP.execute(b);
    }
    catch (std::exception &e) {
        std::cerr << "Form 1 signing failed: " << e.what() << std::endl;
    }

    return 0;
}
