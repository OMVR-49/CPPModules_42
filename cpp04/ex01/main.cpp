/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:27:45 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/01 20:46:26 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

	Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    for (int k = 0; k < 4; ++k) 
	{
        animals[k]->makeSound();
        delete animals[k];
    }
}
