/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:30:47 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/08 16:44:11 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
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
	(void)target;
}

AMateria* AMateria::clone() const
{
	return (new AMateria(*this));
}
