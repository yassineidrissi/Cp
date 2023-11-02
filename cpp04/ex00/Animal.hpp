/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:01:31 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/02 20:16:09 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string.h>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		void makeSound() const;
		virtual std::string getType();
};