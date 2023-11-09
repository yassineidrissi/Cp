/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:12:07 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/09 10:28:16 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

Materia::Materia()
{
	this->type = "default";
}

Materia::Materia(std::string const & type)
{
	this->type = type;
}

Materia::Materia(Materia const & src)
{
	*this = src;
}

Materia::~Materia()
{
}

Material& Material::operator=(condt Material &other)
{
	this->type = other.type;
	return (*this);
}

std::string const & Materia::getType() const
{
	return (this->type);
}

void Material::use(Icharcter& target)
{
	std::cout << "* shoots an Materia at " << target.getName() << " *" << std::endl;
}

AMateria* Materia::clone() const
{
	return (new Materia(*this));
}