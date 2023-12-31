/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialze.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:31:08 by yassine           #+#    #+#             */
/*   Updated: 2023/12/31 16:33:56 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Serializer
{
    public:
        struct Data
        {
            std::string s1;
            int n;
            std::string s2;
        };
        Serializer();
        ~Serializer();
        void *serialize(void);
        Data *deserialize(void *raw);
    private:
        Serializer(Serializer const &src);
        Serializer &operator=(Serializer const &rhs);
}