/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:30:22 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/14 22:56:07 by yaidriss         ###   ########.fr       */
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
		int			SetContact(int index,int parm, std::string name);
		std::string	GetContact(int index,int VarName);
	private:
		Contact contact[8];
};