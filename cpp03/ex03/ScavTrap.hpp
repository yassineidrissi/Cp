/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 01:33:59 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/31 22:10:32 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{	
	
	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target);
		
		// attack(const std::string& target);
};
  