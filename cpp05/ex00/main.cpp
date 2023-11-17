/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:07:06 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/17 21:55:57 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "Bureaucrat.hpp"

// int main()
// {
// 	Bureaucrat john("John", 2);
// 	Bureaucrat jim("Jim", 149);

// 	try
// 	{
// 		std::cout << john << std::endl;
// 		std::cout << jim << std::endl;
// 		jim.incrementGrade();
// 		john.decrementGrade();
// 		std::cout << john << std::endl;
// 		std::cout << jim << std::endl;
// 		jim.incrementGrade();
// 		john.decrementGrade();
// 		std::cout << john << std::endl;
// 		std::cout << jim << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }

#include "Bureaucrat.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("ash", 150);

        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        // bureaucrat.decrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}