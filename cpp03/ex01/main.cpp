/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 01:34:37 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/31 23:56:49 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap a( "yassine" );
    ScavTrap a2( a );

    a.attack( "the air" );
    a.takeDamage( 10 );
    a.beRepaired( 10 );
    a.guardGate();
}