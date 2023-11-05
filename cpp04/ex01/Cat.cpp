/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:11:07 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/05 16:58:44 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{ 
	std::cout << "Constractor Cat called" << std::endl;
	this->type = "Cat";
	this->b = new Brain();
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
	delete this->b;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Copy Constractor Cat called" << std::endl;
	this->b = new Brain();// we can also do this->b = new Brain(*src.b);
	this->b = src.b;
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