/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:06:10 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/27 12:52:28 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const float value);
	Fixed(int n);
	~Fixed();
	void SetValue(int Add);
	int GetValue() const;
	int Getbits() const;
	static const Fixed max(const Fixed &a, const Fixed &b);
	static Fixed max(Fixed &a, Fixed &b);
	static const Fixed min(const Fixed &a, const Fixed &b);
	static Fixed min(Fixed &a, Fixed &b);
	float toFloat( void ) const;
	int toInt(void) const;
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	Fixed&  operator=( const Fixed &rhs);
	
};

	float operator*(const Fixed &First, const Fixed &Second);
	std::ostream& operator<<(std::ostream &out, const Fixed &src);