/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:24:31 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/06 22:07:40 by yaidriss         ###   ########.fr       */
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
    // std::cout << meta->getType() << std::endl;// it cause a sigmunet why ?
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();

	// i->makeSound();//will output the cat sound!
	// j->makeSound();
    
    // Cat *c = new Cat();
    // Dog *d = new Dog();
    // // Brain *b = new Brain();
    // // (void)d;
    // // d.setBrain(b);
    // // c->setBrain(b); 
    // d->getBrain()->setIdea(0, "i am a dog's idea");
    // c->getBrain()->setIdea(1, "i am a cat's idea");
	// std::cout << "we have this value in the brain of the dog d : " << d->getBrain()->getIdea(0) << std::endl;
	// std::cout << "we have this value in the brain of the dog d : " << c->getBrain()-> getIdea(1) << std::endl;
    // // delete d;
    // // delete c;
    // // delete j;//should not create a leak
    // // delete i;
    Animal *animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }
    return 0;
}