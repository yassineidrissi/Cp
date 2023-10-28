/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:05:59 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/28 03:00:24 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int n)
{
	this->value = n << bits;
}

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::~Fixed()
{
	
}

Fixed::Fixed(const float value)
{
	// return static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits );
	// this->value = roundf(value * (1 << bits));
	this->value = roundf(value * (1 << this->bits));
	// std::cout << "value = " << value << "and the this->value = " << this->value << std::endl;
}

int Fixed::toInt() const
{
	return((int)(this->value >> bits));
}

Fixed::Fixed(const Fixed &other)
{
	this->value = other.value;
}

float Fixed::toFloat() const
{
	return((((float)(this->value))/(1 << this->bits)));
}

std::ostream& operator<<(std::ostream &out, const Fixed &src)
{
	// std::cout << "Copy assignement operator called" << std::endl;
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
	
    if ( this != &rhs )
        this->value = rhs.value;
    return *this;
}

float operator*(const Fixed &First,const Fixed &Second)
{
	return(First.toFloat() * Second.toFloat());
}

Fixed const Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	else
		return b;
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	else
		return b;
}

Fixed const Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return b;
	else
		return a;
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return b;
	else
		return a;
}


Fixed& Fixed::operator++()
{
	Fixed::SetValue(Fixed::GetValue() + 1);
	return(*this);
}
Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return(old);
}

Fixed& Fixed::operator--()
{
	Fixed::SetValue(Fixed::GetValue() - 1);
	return(*this);
}
Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	operator++();
	return(old);
}

void Fixed::SetValue(int Add)
{
	this->value = Add;
}

bool Fixed::operator>(const Fixed& other)
{
	if (this->value > other.value)
		return true;
	else 
		return false;
}

bool Fixed::operator<(const Fixed& other)
{
	return (!operator>(other));
}

bool Fixed::operator<=(const Fixed& other)
{
	if (this->value <= other.value)
		return true;
	else 
		return false;
}

bool Fixed::operator>=(const Fixed& other)
{
	if (this->value >= other.value)
		return true;
	else 
		return false;
}

bool Fixed::operator==(const Fixed& other)
{
	if (this->value == other.value) 
		return true;
	else
		return false;
}

bool Fixed::operator!=(const Fixed& other)
{
	return !operator==(other);
}

Fixed Fixed::operator+(const Fixed& other)
{
	Fixed result;
	result.value = this->value + other.value;
	return (result);
	// return Fixed(((float)(this->value + other.value))/(1 << other.bits));
}

Fixed Fixed::operator-(const Fixed& other)
{
	Fixed result;
	result.value = this->value - other.value;
	return result;
	// return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other)
{
	Fixed result;
	unsigned long long n;
	n = this->value * other.value;
	result.value = (n / (1 << Fixed::Getbits())); 
	return result;
}

Fixed Fixed::operator/(const Fixed& other)
{
	Fixed result;
	result.value = (this->value*(1<< Fixed::Getbits()) / other.value);
	return result;
}