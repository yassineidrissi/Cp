/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:11:07 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/06 21:36:51 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{ 
	std::cout << "Constractor WrongCat called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "Copy Constractor WrongCat called" << std::endl;
	*this = src;
}

const WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Assignation WrongCat called" << std::endl;
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat Sound" << std::endl;
}
