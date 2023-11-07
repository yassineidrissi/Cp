/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:00:37 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/07 15:44:03 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain *b;
	public:
		Dog();
		~Dog();
		Dog(const Dog &src);
		const Dog &operator=(const Dog &src);
		void makeSound() const;
		Brain *getBrain() const;
		void setBrain(Brain *b);
};

