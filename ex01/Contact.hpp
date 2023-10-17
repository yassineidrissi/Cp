/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:44:22 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/15 20:30:15 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>

//Define Colors Parameters
#define RED_TEXT "\033[31m"
#define GREEN_TEXT "\033[32m"
#define YELLOW_TEXT "\033[33m"
#define BLUE_TEXT "\033[35m"
#define RESET_TEXT "\033[0m"

class Contact
{
	public:
		Contact();
		void setFirstName(std::string firstName);
		std::string getFirstName();
		void setLastName(std::string lastName);
		std::string getLastName();
		void setNickName(std::string nickName);
		std::string getNickName();
		void setPhoneNumber(std::string phoneNumber);
		std::string getPhoneNumber();
		void setDarkestSecret(std::string DarkestSecret);
		std::string getDarkestSecret();
		~Contact();
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
};
