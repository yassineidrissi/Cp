/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:09:14 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/18 15:07:44 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
		private:
			std::string name;
			Weapon& weapon;
			HumanA();//why we need to put this here ?
		public:
			HumanA(std::string name, Weapon& weapon);
			~HumanA();
			void attack( void ) ;		
};