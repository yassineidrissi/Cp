/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 21:20:29 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/02 04:41:58 by yaidriss         ###   ########.fr       */
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
	std::srand(std::time(0)); // use cuttrnt time as seed for random generator 
	int hz = (std::rand() % 3);
	// std::cout << GREEN << "the number generate is " << RESET << hz << std::endl;
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

void Base::identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
}

void Base::identify(Base& p) {
	if (dynamic_cast<A*>(&p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(&p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(&p)) {
		std::cout << "C" << std::endl;
	}
}