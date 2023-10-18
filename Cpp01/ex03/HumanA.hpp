/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:09:14 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/17 20:41:26 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
		private:
			std::string name;
			Weapon& Weapon;
			HumanA();//why we need to put this here ?
		public:
			HumanA(std::string name, class Weapon Weapon);
			~HumanA();
			void attack( void ) ;		
};