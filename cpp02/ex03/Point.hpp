/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:42:57 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/27 01:53:17 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Point
{
	private:
		Fixed x;
		Fixed y;
	public:
		Point();
		Point(const float a, const float b);
		Point(const Point &Other);
		Fixed& operator=(const Fixed &src);
		~Point();
		Fixed& GetFixed(bool x);
}; 