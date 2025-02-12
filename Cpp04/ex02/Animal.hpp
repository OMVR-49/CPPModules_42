/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:03:09 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/02 01:49:14 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>
#include<string>
#include "Brain.hpp"

class Animal 
{
	protected:
		 std::string type;
	public:
	//OCCF:
		Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& obj);
		virtual ~Animal();
	//Method:
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif