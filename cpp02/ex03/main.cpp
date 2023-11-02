/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:48:10 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/29 07:51:06 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point c = Point(0, 0);
	Point b = Point(0, 2);
	Point a = Point(2, 1);
	Point point = Point(1,1);
	std::cout << "this is value of bsq is : " << bsq(a, b, c, point);
}