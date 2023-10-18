/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:41:52 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/17 21:42:41 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, class Weapon Weapon)
{
	this->name = name;
	this->Weapon = Weapon;
}

HumanA::~HumanA()
{
	
}

void HumanA::attack( void )
{
	std::cout << this->name <<"attacks With their " << this->Weapon.getType() << std::endl;
}