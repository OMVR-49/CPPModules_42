/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:33:41 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/19 00:34:15 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *dZombie = newZombie("heaperstik");
    dZombie->announce();
    randomChump("stackest");
    delete dZombie;
    return (0);
}