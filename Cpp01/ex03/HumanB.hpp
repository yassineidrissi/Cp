/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:09:45 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/17 20:38:57 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *Weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack( void );
		void setWeapon(class Weapon Weapon);
};