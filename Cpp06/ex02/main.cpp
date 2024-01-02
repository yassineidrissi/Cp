/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 22:29:43 by yaidriss          #+#    #+#             */
/*   Updated: 2024/01/02 04:43:07 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base *a = new Base;
	Base *b = new Base;
	b = a->generate();
	a->identify(b);
	free(b);
	// system("leaks Base");
	return 0;
}