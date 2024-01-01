/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:27:27 by yassine           #+#    #+#             */
/*   Updated: 2024/01/01 01:02:57 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main() {
    // Create a Serializer object
    Serializer serializer;

    // Create a Data object
    Data &data = new Data;
    // Initialize your data here

    // Serialize the Data object
    uintptr_t serializedData = serializer.serialize(data);

    // Print the serialized data
    std::cout << "Serialized data: " << serializedData << std::endl;

    // Deserialize the data
    Data deserializedData = serializer.deserialize(serializedData);

    // Print the deserialized data
    // You need to implement this part based on how your Data struct is defined

    // Clean up
    // delete data;
    // delete deserializedData;
    
    return 0;
}