/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:51:47 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/01 17:18:50 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include<iostream>
#include<string>

class Brain 
{
	protected:
		 std::string ideas[100];
	public:
	// OCCF:
		Brain();
		~Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& obj);
};

#endif