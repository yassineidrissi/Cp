/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:03:20 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/04 13:36:54 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor Called" << std::endl;
	this->type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal Sound" << std::endl; //!why we use here the const after makeSound()?	
}

std::string Animal::getType() const //!why we use here the const after getType()?
{
	return (this->type);
}