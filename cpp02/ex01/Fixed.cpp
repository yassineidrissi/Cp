/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:05:59 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/28 07:23:37 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = n << bits;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << this->bits));
}

int Fixed::toInt() const
{
	return((int)(this->value >> bits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(other);
}

float Fixed::toFloat() const
{
	return((((float)(this->value))/(1 << this->bits)));
}

std::ostream& operator<<(std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return out;
}

int Fixed::Getbits() const
{
	return((int)(this->bits));
}

int Fixed:: GetValue() const
{
	return((int)(this->value));
}

Fixed& Fixed::operator=( const Fixed &rhs ) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = rhs.value;
    return *this;
}