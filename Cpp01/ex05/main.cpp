/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:11:05 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/22 17:18:55 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::cout << "wish level do u want :" << std::endl << ">>";
	std::string level;
	std::getline(std::cin, level);
	harl.complain(level);
	return 0;
}