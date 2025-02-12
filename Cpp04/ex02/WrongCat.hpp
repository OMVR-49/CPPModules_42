/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:39:47 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/01 13:49:21 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include<iostream>
#include<string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	//OCCF:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& copy);
		WrongCat& operator=(const WrongCat& obj);
	//Method:
		void makeSound() const;
};

#endif