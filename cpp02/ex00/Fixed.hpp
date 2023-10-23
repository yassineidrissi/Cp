/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:06:10 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/22 16:56:38 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Fixed
{
private:
	int value;
public:
	Fixed();
	Fixed(const Fixed &src);
	~Fixed();
	Fixed& operator=(const Fixed &src);
	int getRawBits(void) const;
};