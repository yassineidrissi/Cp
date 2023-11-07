/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:03:20 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/07 13:58:40 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor Called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal& Animal::operator=(const Animal &src)
{
	std::cout << "Animal Assignation Operator Called" << std::endl;
	this->type = src.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal Sound" << std::endl;	
}

std::string Animal::getType() const 
{
	return (this->type);
}