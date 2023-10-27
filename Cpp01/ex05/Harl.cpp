/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:25:58 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/20 20:28:44 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
};

Harl::~Harl()
{
	
};

const std::string HARL[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
void debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;	
}

void info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;	
}

void warn(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

func funcArray[4] = {&debug, &info, &warn , &error};


void Harl::complain( std::string level)
{
	int i = 0;
	while(level != HARL[i] && i < 4)
		i++;
	if(i > 3)
		return ;
	funcArray[i]();
};