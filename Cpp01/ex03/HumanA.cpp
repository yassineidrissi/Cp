/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:41:52 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/18 15:08:30 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weap) :
	name(name), weapon(weap)
{
}

HumanA::~HumanA()
{
	
}

void HumanA::attack( void )
{
	std::cout << this->name <<"attacks With their " << this->weapon.getType() << std::endl;
}