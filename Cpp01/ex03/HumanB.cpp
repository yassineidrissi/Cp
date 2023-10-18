/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:09:48 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/17 20:09:49 by yaidriss         ###   ########.fr       */
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
	std::cout << this->name << "attacks with their " << this->Weapon->getType() << std::endl;
}

void HumanB::setWeapon( class Weapon Weapon)
{
	this->Weapon = &Weapon;
}