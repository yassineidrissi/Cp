/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:59:57 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/21 17:10:00 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string *stringREF = &string;

	std::cout << "The address in memory of the string: " << &string << std::endl;
	std::cout << "The address in memory of the string using the pointer: " << &stringPTR << std::endl;
	std::cout << "The adress in memory of stringREF" << &stringREF << std::endl;
	std::cout << "The value of pinter str : " << string << std::endl;
	std::cout << "The value of pointer stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value of pointer stringRFE : " << *stringREF << std::endl;
}