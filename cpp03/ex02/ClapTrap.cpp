/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:25:48 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/29 07:36:32 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) : _name(name), _Hitp(10), _Energyp(10),_Attackd(0)
{
	std::cout << "ClapTrap " << name << " Created " << std::endl;
	// this->_name = name;
	// this->_Hitp = 0;
	// this->_Attackd = 0;
	// this->_Energyp = 10;
}

ClapTrap::ClapTrap()
{
	ClapTrap("default");
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deleted " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _Hitp(other._Hitp), _Energyp(other._Energyp), _Attackd(other._Attackd)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->_name << " Attacks " << target << " causing " << this->_Attackd + 1 << " points of damage !" << std::endl;
	this->_Attackd += 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTarp " << this->_name << " take damage " << amount << std::endl;
	this->_Hitp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTarp" << this->_name << " be repaired " << amount << std:: endl;
	this->_Energyp -= 1;
	this->_Hitp += amount;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	this->_name = rhs._name;
	this->_Attackd = rhs._Attackd;
	this->_Energyp = rhs._Energyp;
	this->_Hitp = rhs._Hitp;
	return *this;
}

std::string ClapTrap::GetName()
{
	return this->_name;
}