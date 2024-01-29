/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:30:50 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/25 23:58:41 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 0)
		return(NULL);
	Zombie *newZombies = new Zombie[N];
	for (int i = 0; i < N ; i++)
	{
		newZombies[i].setName(name);
	}
	return (newZombies);
}

void deletezombieHorde(Zombie* newZombies)
{
	delete[] newZombies;
}
