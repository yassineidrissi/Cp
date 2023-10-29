/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:26:44 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/29 01:30:24 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("First");
	ClapTrap b(a);
	ClapTrap c("Second");
	c = a;
	c.attack("yaidriss");
	a.attack("yassine");
	a.takeDamage(5);
	a.beRepaired(3);
}