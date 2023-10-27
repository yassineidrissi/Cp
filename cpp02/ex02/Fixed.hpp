/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:06:10 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/27 14:09:13 by yaidriss         ###   ########.fr       */
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
	Fixed& operator++();//pre-increment need to check
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	Fixed&  operator=( const Fixed &rhs);
	// Overload the greater than (>) operator
    bool operator>(const Fixed& other);
    // Overload the less than (<) operator
    bool operator<(const Fixed& other);
    // Overload the greater than or equal to (>=) operator
    bool operator>=(const Fixed& other);
    // Overload the less than or equal to (<=) operator
    bool operator<=(const Fixed& other) ;
    // Overload the equality (==) operator
    bool operator==(const Fixed& other) ;
    // Overload the inequality (!=) operator
    bool operator!=(const Fixed& other);
	// Overload the addition (+) operator
    Fixed operator+(const Fixed& other);
    // Overload the subtraction (-) operator
    Fixed operator-(const Fixed& other);
    // Overload the multiplication (*) operator
    Fixed operator*(const Fixed& other);
    // Overload the division (/) operator
    Fixed operator/(const Fixed& other);
	
};

	float operator*(const Fixed &First, const Fixed &Second);
	std::ostream& operator<<(std::ostream &out, const Fixed &src);