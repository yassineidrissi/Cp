/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:11:05 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/20 20:16:40 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::cout << "wish level is u want ?:" << std::endl;
	std::string level;
	std::getline(std::cin, level);
	harl.complain(level);
	return 0;
}