/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:18:21 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/17 19:28:10 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie*    ZombieHorde( int N, std::string name ) {
    Zombie *zombiz = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombiz[i].SetName(name);
    }
    return zombiz;
}

// #include "Zombie.hpp"

// Zombie* ZombieHorde(int N, std::string name)
// {
// 	(void)name;
// 	Zombie *zombie;
// 	zombie = new Zombie[N];
// 	for(int i = 0; i < N; i++)		
// 		zombie[i].SetName(name);
// 	return (zombie);
// }