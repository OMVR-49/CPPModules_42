/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:04:11 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/01 13:33:47 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include<iostream>
#include<string>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
	// OCCF:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& obj);
		~Dog();
	//Method:
		void makeSound() const ;
};

#endif