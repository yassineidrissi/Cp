/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:24:31 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/10 00:28:42 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main( void )
{
    // Animal* meta = new Animal(); 
    // std::string test = meta->getType();
    // test += "test";
    // std::cout << meta->getType() << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	i->makeSound(); //will output the cat sound!
	j->makeSound();

    delete j;
    delete i;
    Animal *animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }
    return 0;
}