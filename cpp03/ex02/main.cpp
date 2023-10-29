/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:20:34 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/29 23:21:17 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap frag("yaidriss");
	frag.attack("youssef");
	frag.takeDamage(10);
	frag.beRepaired(10);
	frag.highFivesGuys();
}