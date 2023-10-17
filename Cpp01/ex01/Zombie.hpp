/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:05:00 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/17 19:27:12 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>


#include <iostream>

class Zombie
{
    
private:
    std::string name;

public:
    Zombie();
    ~Zombie();
    void    Announce( void );
    Zombie* newZombie( std::string name );
    void    SetName( std::string name );

};

Zombie*    ZombieHorde( int N, std::string name );


// class Zombie
// {
// 	public:
// 		void SetName(std::string name);
// 		void Announce( void );
// 		Zombie(std::string name);
// 		~Zombie();
		
// 	private:
// 		std::string name;
// };

// Zombie*	ZombieHorde(int N, std::string name);
