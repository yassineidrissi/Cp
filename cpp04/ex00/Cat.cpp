/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:11:07 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/07 15:36:22 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{ 
	std::cout << "Cat Constractor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Constractor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Copy Cat Constractor called" << std::endl;
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

Brain *Cat::getBrain() const
{
	return (this->b);
}

void Cat::setBrain(Brain *b)
{
	this->b = b;
}