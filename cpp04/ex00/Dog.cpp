/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:00:26 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/01 17:19:06 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->type = src.type;	
	*this = src;
}

const Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog Assignation Operator Called" << std::endl;
	this->type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog Sound" << std::endl;
}