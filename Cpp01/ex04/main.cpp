/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:48:29 by yassine           #+#    #+#             */
/*   Updated: 2023/10/22 17:31:27 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "replace.hpp"

int main(int ac, char **av)
{
	
	if(ac != 4 || !av[2][0])//!need to check empty parametres before calling the function
		std::cout << "Error" << std::endl << "Wrong Parametres" << std::endl;
	else
	{
		std::string namefile(av[1]);
		std::string s1(av[2]);
		std::string s2(av[3]);
		std::ifstream inf;//(namefile + ".replace");
		inf.open(namefile);

		if (inf.is_open())
		{
			std::string newfile = namefile + ".replace";
			std::ofstream newfd(newfile);
			if(newfd.is_open())
				ft_replace(newfd, inf, s1, s2);
			else
				std::cout << "Error" << std::endl << "Can't open the new file" << std::endl;
		}	
		
		
	}
}
