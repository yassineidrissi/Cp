/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:05:00 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/17 17:10:01 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>


class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void Announce( void );
		Zombie( void );
		
	private:
		std::string name;
};

Zombie* newZombie( std::string name);
void randomChump( std::string name );