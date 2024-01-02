/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 21:20:29 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/02 06:22:37 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
	std::cout << YELLOW << "Call Destructor" << RESET << std::endl;
}

Base* Base::generate(void)
{
	A* a = new A;
	B* b = new B;
	C* c = new C;
	std::srand(std::time(0)); // use cuttrnt time as seed for random generator 
	int hz = (std::rand() % 3);
	// std::cout << GREEN << "the number generate is " << RESET << hz << std::endl
	
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
}

B::~B()
{
}

C::~C()
{
}

void Base::identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << GREEN << "for ptr : A" << RESET << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << GREEN << "for ptr : B" << RESET << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout <<GREEN << "for ptr : C" << RESET << std::endl;
	}
	else
	{
		std::cout << "There is no Data type" << std::endl;
	}
}

void Base::identify(Base& p) {
	try
	{
		__unused Base a = dynamic_cast<A&>(p);
		std::cout << GREEN  << "for ref : A" << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			__unused Base b = dynamic_cast<B&>(p);
			std::cout << GREEN << "for ref : B" << RESET << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{			
				__unused Base c = dynamic_cast<C&>(p);
				std::cout << GREEN << "for ref : C" << RESET << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << RED << "There is no Data" << RESET << std::endl;
			}

			
		}
	}
	
}