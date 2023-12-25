/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:55:02 by yaidriss          #+#    #+#             */
/*   Updated: 2023/12/25 23:23:25 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


int main() {
    Intern someRandomIntern;

    try{
        AForm* rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
        if (rrf != nullptr) {
            std::cout << "AForm created successfully!" << std::endl;
            delete rrf;  // Remember to delete the AForm to avoid memory leaks
        } else {
            std::cerr << "Error creating AForm. Invalid AForm name." << std::endl;
        }   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
