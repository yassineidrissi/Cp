/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:09:48 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/18 15:12:43 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
	
}

void HumanB::attack( void )
{
	std::cout << this->name << "attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}