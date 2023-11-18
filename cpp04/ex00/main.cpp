/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:24:31 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/10 22:54:45 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wAnimal = new WrongAnimal();
	const WrongAnimal* wCat = new WrongCat();
	std::cout << meta->getType()  << std::endl;
	std::cout << j->getType()  << std::endl;
	std::cout << i->getType()  << std::endl;
	std::cout << wAnimal->getType()  << std::endl;
	std::cout << wCat->getType()  << std::endl;
	i->makeSound(); 
	j->makeSound();
	meta->makeSound();
	wAnimal->makeSound();
	wCat->makeSound();
	delete j; 
	delete i;
	delete meta;
	delete wAnimal;
	delete wCat;
	return 0;
}
