/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:30:36 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/19 22:10:29 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *dZombies = zombieHorde(5, "rafael");
	for(int i = 0; i < 5; i++)
	{
		dZombies[i].announce();
	}
	deletezombieHorde(dZombies);
    return (0);
}