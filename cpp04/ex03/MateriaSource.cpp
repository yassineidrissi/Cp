/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:28:29 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/09 12:30:56 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->count = 0;
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	this->count = src.count;
	for (int i = 0; i < 4; i++)
		this->materia[i] = src.materia[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src)
{
	this->count = src.count;
	for (int i = 0; i < 4; i++)
		this->materia[i] = src.materia[i];
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->materia[i];
}


void MateriaSource::learnMateria(AMateria* m)
{
	if (this->count < 4)
	{
		this->materia[this->count] = m;
		this->count++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i]->getType() == type)
			return (this->materia[i]->clone());
	}
	return (NULL);
}
