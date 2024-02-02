/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:03:59 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/02 01:46:10 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include<iostream>
#include<string>
#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain* _Brain;
	public:
	// OCCF:
		Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& obj);
		~Cat();
	//Method:
		void makeSound() const;
};

#endif