/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:24:31 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/10 00:30:01 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main( void )
{  
    Cat *c = new Cat();
    Dog *d = new Dog();

    d->getBrain()->setIdea(0, "i am a dog's idea");
    c->getBrain()->setIdea(1, "i am a cat's idea");
	std::cout << "we have this value in the brain of the dog d : " << d->getBrain()->getIdea(0) << std::endl;
	std::cout << "we have this value in the brain of the dog d : " << c->getBrain()-> getIdea(1) << std::endl;
    delete d;
    delete c;

    return 0;
}