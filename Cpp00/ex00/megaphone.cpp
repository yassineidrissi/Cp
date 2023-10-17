/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:46:43 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/12 22:26:11 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < ac; i++)
		{
			for (int j = 1; av[i][j]; j++)
				std::cout << (char)std::toupper(av[i][j]);
				
			if(i < ac -1)
				std::cout << " ";
		} 
	std::cout << std::endl;
	return(EXIT_SUCCESS);
}