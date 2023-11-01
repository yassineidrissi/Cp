/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:11:07 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/01 18:16:43 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constractor Cat called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Copy Constractor Cat called" << std::endl;
	*this = src;
}

const Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Assignation Cat called" << std::endl;
	this->type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat Sound" << std::endl;
}