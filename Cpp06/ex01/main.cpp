/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:27:27 by yassine           #+#    #+#             */
/*   Updated: 2024/01/01 21:17:15 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main() {
   Data *d;
   Data *data = new Data;
   Serializer serializer;
   uintptr_t ptr;
   data->s = "hello world!"; 
   ptr = serializer.serialize(data);
   std::cout << YELLOW << "the ptr : " << RESET << ptr << std::endl;
   d = serializer.deserialize(ptr);
   std::cout << YELLOW << "the data : " << RESET << d->s << std::endl;
   return 0;
}