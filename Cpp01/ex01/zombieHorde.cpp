/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:30:50 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/19 22:08:19 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;

	Zombie *newZombies = new Zombie[N];
	while (i < N)
		newZombies[i++].setName(name);
	return (newZombies);
}

void deletezombieHorde(Zombie* newZombies)
{
	delete[] newZombies;
}
