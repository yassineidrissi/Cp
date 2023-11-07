/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:45:31 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/07 15:47:37 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor Called" << std::endl;
}

std::string Brain::getIdea(int i)
{
	return this->ideas[i];
}

void Brain::setIdea(int i, std::string idea)
{
	this->ideas[i] = idea;
}

Brain &Brain::operator=(const Brain &src)
{
	for(int i=0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);
}

Brain::Brain(const Brain &src)
{
	for(int i=0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}