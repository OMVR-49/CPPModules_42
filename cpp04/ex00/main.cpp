/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:42:50 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/01 20:21:40 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound(); //will output the dog sound!
		meta->makeSound(); //will output the animal sound!
		delete meta;
		delete i;
		delete j;

		std::cout << "------------------------" << std::endl;
		const WrongAnimal* met = new WrongAnimal();
		const WrongAnimal* k = new WrongCat();
		std::cout << k->getType() << " " << std::endl;
		k->makeSound();
		met->makeSound();
		delete met;
		delete k;
		return 0;
}
