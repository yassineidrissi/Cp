/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:11:25 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/07 15:33:23 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain *b;
	public:
		Cat();
		Cat(const Cat &src);
		virtual ~Cat();
		Brain *getBrain() const;
		void setBrain(Brain *b);
		const Cat &operator=(const Cat &other);
		void makeSound(void) const;
};