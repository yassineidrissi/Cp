/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Basse.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 21:20:47 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/01 21:28:13 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#define RED "\033[0;31m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

class Base
{
	~Base();
	Base *generate(void);
	void identify(Base* p);
	void identify(Base& p);
}

class A: public Base
{
	
}

class B: public Base
{
	
}

class C: public Base
{
	
}