/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:55:58 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/09 22:14:31 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	Character("Default");
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character " << this->_name << " is created" << std::endl;
}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character()
{
	std::cout << "Character " << this->_name << " destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character & Character::operator=(Character const & src)
{
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			 std::cout << "Character " << this->_name << " equipped with " << m->getType() << std::endl;
			return ;
		}
		std::cout << "Character " << this->_name << " can't equip " << m->getType() << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
		return ;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
	{
		std::cout << "Character " << this->_name << " can't use" << std::endl;
		return ;
	}
	(void) target;
	this->_inventory[idx]->use(target);
}
