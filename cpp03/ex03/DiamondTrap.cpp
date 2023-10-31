/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:48:09 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/31 22:20:13 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->_Hitp = FragTrap::_Hitp;
	this->_Energyp = ScavTrap::_Energyp;
	this->_Attackd = FragTrap::_Attackd;
	std::cout << "DiamondTrap Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap()
{
	DiamondTrap("default");
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

void DiamondTrap::WhoAmI()
{
	std::cout << "HP: " << _Hitp << std::endl;
	std::cout << "EP: " << _Energyp << std::endl;
	std::cout << "AD: " << _Attackd << std::endl;
	std::cout << "DiamondTrap name is " << this->_name << " and his ClapTrap name is " << ClapTrap::_name << std::endl;
}
