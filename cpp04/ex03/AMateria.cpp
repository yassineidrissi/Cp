/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:30:47 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/09 21:55:32 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
	std::cout << "AMateria " << _type << " is created" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria &src)
{
	this->_type = src._type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria " << _type << " used on " << target.getName() << std::endl;
}

// AMateria* AMateria::clone() const
// {
// 	AMateria *nw = new AMateria();
// 	nw->_type = this->_type;
// 	return (nw);
// 	// return (new AMateria(*this));
// }
