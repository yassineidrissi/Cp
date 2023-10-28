/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:42:57 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/28 06:08:34 by yaidriss         ###   ########.fr       */
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
		~Point();
		Point& operator=(const Point &src);
		const Fixed& GetFixed(bool x) const;
		float GetValue(bool x) const;
		int Fa(int x, float a, float b);
		int Fb(int x, float a, float b);
		int Fc(int x, float a, float b);
}; 

bool bsq(Point const a, Point const b, Point const c, Point const point);