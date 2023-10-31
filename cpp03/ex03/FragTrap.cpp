/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:13:13 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/31 22:24:57 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->_Hitp = 100;
	this->_Attackd = 30;
	// this->_Energyp = 50;
	std::cout << "FragTrap " <<  name << " Created" << std::endl;
}

FragTrap::FragTrap(void)
{
	FragTrap("default");
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->GetName() << " Destructed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " wants to high five" << std::endl;
}