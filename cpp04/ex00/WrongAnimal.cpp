/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:03:20 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/04 13:36:54 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor Called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound" << std::endl;
std::string WrongAnimal::getType() const 
{
	return (this->type);
}