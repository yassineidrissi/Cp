/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:30:22 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/13 17:47:17 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(){};
		void setContact(const Contact);
		Contact getContact();
		~PhoneBook(){};
	private:
		Contact contact;
};