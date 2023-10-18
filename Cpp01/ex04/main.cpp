/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:48:29 by yassine           #+#    #+#             */
/*   Updated: 2023/10/18 16:33:58 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "replace.hpp"

int main(int ac, char **av)
{
	
	if(ac != 4)
		std::cout << "Error" << std::endl << "Wrong nomber of arguments" << std::endl:
	else
	{
		std::string namefile(av[1]);
		std::string s1(av[2]);
		std::string s2(av[3]);
		std::ifstream inf;
		inf.open(namefile);

		if (inf.isopen(namefile))
		{
			
		}	
		
		
	}
}