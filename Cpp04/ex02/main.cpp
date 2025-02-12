/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:29:30 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/02 00:07:45 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal* j = new Dog();
    Animal* i = new Cat();
    delete j;
    delete i;

    std::cout << "------------------------" << std::endl;
	Animal* animals[] = {new Dog(), new Dog(), new Cat(), new Cat()};
    for (int k = 0; k < 4; ++k)
	{
        animals[k]->makeSound();
        delete animals[k];
    }
    return 0;
}
