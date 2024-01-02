/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 21:20:29 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/01 23:56:48 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
	std::cout << GREEN << "Call Destructor" << RESET << std::endl;
}

Base* Base::generate(void)
{
	A* a = new A;
	B* b = new B;
	C* c = new C;
	size_t hz = (std::rand() % 3);
	std::cout << GREEN << "the number generate is " << RESET << hz << std::endl;
    switch (hz)
	{
	case 0:
	{
		free(b);
		free(c);
		return  (reinterpret_cast<Base*>(a));
	}
		break;
	case 1:
	{
		free(a);
		free(c);
		return (reinterpret_cast<Base*>(b));
	}
		break;
	
	default:
	{
		free(a);
		free(b);
		return (reinterpret_cast<Base*>(c));
	}
		break;
	}
}

A::~A()
{
	std::cout << GREEN << "Call A Constructor" << RESET <<std::endl;
}

B::~B()
{
	std::cout << GREEN << "Call B Constructor" << RESET <<std::endl;
}

C::~C()
{
	std::cout << GREEN << "Call C Constructor" << RESET <<std::endl;
}