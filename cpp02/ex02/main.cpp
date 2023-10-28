/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:12:06 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/28 02:59:31 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed d(5);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout <<" a =" << a << std::endl;
	std::cout << " b = " << b << std::endl;
	Fixed e(5.2f);
	Fixed j(10.4f);
	d = j/e;
	std::cout << "d = " << d << std::endl;
	Fixed k(10.1020f);
	k = k/e;
	std::cout << "k = " << k << std::endl;
	// Fixed c = d - b; // c = b - a don't work 
	// std::cout << "c = " << c << std::endl;
	// if (a < b)
	// 	std::cout << "the operation d " << d << std::endl;
	// if (a == b)
	// 	std::cout << "the operation works 2" << std::endl;
	// std::cout << "the value of c is " << a / d << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
