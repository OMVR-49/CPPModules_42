/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:27:11 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/19 22:10:14 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private :
        std::string name;
    public :
        Zombie();
        ~Zombie();
        void setName(std::string& newName);
		void announce( void );
};

Zombie*	newZombie(std::string name);
void	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );
void deletezombieHorde(Zombie* newZombies);

#endif