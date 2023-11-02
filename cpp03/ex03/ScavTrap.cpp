/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 01:33:43 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/01 00:03:27 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
// ScavTrap::ClapTrap(std::string& name) : _name(name), _Hitp(100), _Energyp(50), _attackp(20)
// {
// 	std::cout << "ScavTrap " << _name << "Created" << std::endl;
// }

ScavTrap::ScavTrap()
{
	ScavTrap("default");
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	// this->_Hitp = 100;
	// this->_Attackd = 20;
	this->_Energyp = 50;
	std::cout << "ScavTrap " <<  name << " Created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " Destructed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_Hitp == 0)
	{
		std::cout << "ScavTrap " << this->_name << "is dead" << std::endl;
		return ;
	}
	else if (_Energyp == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points" << std::endl;
		return ;
	}
	_Energyp -= 1;
	std::cout << "ScavTrap " << this->_name << " Attacks "<< target << " causing " << this->_Attackd << " Point of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
// void ScavTrap::attack(const std::string& target)
// {
// 	std::cout << "ScavTrap " << this->GetName() << "attacked ";
// }
// ScavTrap::attack()
