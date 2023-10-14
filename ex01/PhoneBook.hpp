/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:30:22 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/13 23:49:31 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

std::string getstring(int i);

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		int		SetContact(int index,int parm, std::string name);
		void	PrintContact(std::string Name,int index,int VarName);
	private:
		// int index;
		Contact contact[8];
};

