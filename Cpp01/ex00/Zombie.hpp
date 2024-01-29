/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:24:44 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/21 08:35:16 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <memory>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void setName(std::string& newName);
		void announce( void );
};

Zombie*	newZombie(std::string name);
void	randomChump( std::string name );

#endif