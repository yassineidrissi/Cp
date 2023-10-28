/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:48:10 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/28 06:48:51 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point a = Point(0, 0);
	Point b = Point(10, 0);
	Point c = Point(5, 5);
	Point point = Point(50, 5);
	std::cout << "this is value of " << bsq(a, b, c, point);
}