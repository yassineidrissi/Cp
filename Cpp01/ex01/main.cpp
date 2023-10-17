/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:04:33 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/17 19:30:43 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	Zombie *zombi = ZombieHorde(N, "zombi");

    for (int i = 0; i < N; i++) {
        zombi[i].Announce();
    }

    delete [] zombi;
    // system("leaks brainz");
    return 0;
}