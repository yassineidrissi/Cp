/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:07:06 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/11 14:54:14 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureacrat.hpp"

int device(int a, int b)
{
	if (b == 0)
		throw number();
	return (a / b);
}

int main()
{
	int a = 10;
	int b = 0;
	int c = 0;	

	try 
	{
		std::cout << device(a, b) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;				
	}
}