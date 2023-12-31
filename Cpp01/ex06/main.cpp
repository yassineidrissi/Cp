/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:11:05 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/21 16:54:26 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	if (ac != 2)
		return(std::cout << "Invalid parametre"<< std::endl, 0);

	std::string array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		if (av[1] == array[i])
			break;
	}
	
	switch (i)
	{
	case 0:
		harl.complain(array[i++]);
		// std::cout <<"first parameter" << std::endl;		
	case 1:
		harl.complain(array[i++]);
		// std::cout <<"second parameter" << std::endl;		
	case 2:
		harl.complain(array[i++]);
		// std::cout <<"third parameter" << std::endl;		
	case 3:
		harl.complain(array[i++]);
		break;
		// std::cout <<"fourth parameter" << std::endl;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	
	return 0;
}