/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:44:08 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/27 01:54:43 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point()
{
	this->x.SetValue(0);
	this->y.SetValue(0);
}

Point::~Point()
{
	
}

Fixed& GetFixed(bool x)
{
	if (x = true)
		return Fixed:: ;
	else
		return this->y;
}