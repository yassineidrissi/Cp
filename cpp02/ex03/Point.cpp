/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:44:08 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/28 06:48:28 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point()
{
	this->x.SetValue(0);
	this->y.SetValue(0);
}

Point::Point(float x, float y)
{
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point(const Point &other)
{
	this->x = other.x;
	this->y = other.y;
}

Point::~Point()
{
	
}

Point& Point::operator=(const Point &src)
{
	this->x = src.x;
	this->y = src.y;
	return *this;
}

const Fixed& Point::GetFixed(bool x) const
{
	if (x == true)
		return this->x;
	else
		return this->y;
}

float Point::GetValue(bool x) const
{
	Fixed a = this->GetFixed(x);
	return(a.GetValue());
}


bool ft_line(float aa, float ab, Point const a)
{
	if (aa*a.GetValue(true) + ab == a.GetValue(false))
		return true;
	else
		return false;
}

bool ft_dup(Point const a, Point const b, Point const c)
{
	if((a.GetValue(true) == b.GetValue(true)) && (a.GetValue(false) == b.GetValue(false)))
		return true;
	else if((a.GetValue(true) == c.GetValue(true)) && (a.GetValue(false) == c.GetValue(false))) 
		return true;
	else if((b.GetValue(true) == c.GetValue(true)) && (b.GetValue(false) == c.GetValue(false))) 
		return true;
	else
		return false;
}

int same_sign(float a, float p)
{
	if (a*p >= 0)
		return 1;
	else 
		return -1;
}

int Fx(float x, float y, Point const a, Point const p)
{
	float vertical_a = x*a.GetValue(true) + y;
	float vertical_p = x*p.GetValue(true) + y;
	float sign_a = a.GetValue(false) - vertical_a;
	float sign_p = p.GetValue(false) - vertical_p;
	return(same_sign(sign_a, sign_p));
}

bool comp(Point const a, Point const p)
{
	if (a.GetValue(true) == p.GetValue(true) && (a.GetValue(true) == p.GetValue(true)))
		return true;
	return false;
}

bool ft_equal(Point const a, Point const b, Point const c, Point const p)
{
	if (comp(a,p) || comp(b,p) || comp(c, p))
		return true;
	return false;
		
}

bool bsq(Point const a, Point const b, Point const c, Point const point)
{
	(void)point;
	float aa, ab, ba, bb, ca, cb;
	if(ft_dup(a, b, c))
		return false;
	aa = (b.GetValue(false) - c.GetValue(false))/(b.GetValue(true) - c.GetValue(true));
	ab = b.GetValue(false) - aa*b.GetValue(true);
	if(ft_line( aa, ab, a))
		return false;
	if(ft_equal(a, b , c, point))
		return true;
	ba = (a.GetValue(false) - c.GetValue(false))/(a.GetValue(true) - c.GetValue(true));
	bb = a.GetValue(false) - aa*a.GetValue(true);
	ca = (a.GetValue(false) - b.GetValue(false))/(a.GetValue(true) - b.GetValue(true));
	cb = a.GetValue(false) - aa*a.GetValue(true);
	if((Fx(aa, ab, a, point) == Fx(ba, bb, b, point)) && (Fx(aa, ab, a, point) == Fx(ca, cb, c, point)) && (Fx(ba, bb, b, point) == Fx(ca, cb, c, point)))
		return true;
	return false;
}