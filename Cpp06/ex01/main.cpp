/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:27:27 by yassine           #+#    #+#             */
/*   Updated: 2023/12/31 16:28:06 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialze.hpp"

int main()
{
    void *raw;
    Data *data;

    raw = serialize();
    data = deserialize(raw);
    std::cout << "s1: " << data->s1 << std::endl;
    std::cout << "n: " << data->n << std::endl;
    std::cout << "s2: " << data->s2 << std::endl;
    delete data;
    delete static_cast<char*>(raw);
    return (0);
}