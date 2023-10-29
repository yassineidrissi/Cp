/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:13:32 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/29 23:21:57 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"

class FragTrap : public ScavTrap
{
	private:

	public:
		FragTrap();
		FragTrap(const std::string& name);
		~FragTrap();
		void highFivesGuys(void);
};
