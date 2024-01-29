/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:30:36 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/26 00:31:52 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define N 5

int main()
{
    Zombie *dZombies = zombieHorde(N, "rafael");
	for(int i = 0 ; i < N ; i++)
	{
		dZombies[i].announce();
	}
	deletezombieHorde(dZombies);
    return (0);
}