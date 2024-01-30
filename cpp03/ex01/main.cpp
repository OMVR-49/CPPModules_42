/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:12:40 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/30 17:59:53 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Omar");
	ScavTrap c(a);
	ScavTrap v = c;

	c.attack("Soufiane");
	c.takeDamage(105);
	c.attack("Soufiane");
	c.takeDamage(0);
	c.beRepaired(20);
	c.attack("Soufiane");
	c.beRepaired(85);
	c.beRepaired(20);
	c.takeDamage(99);
	c.beRepaired(100);
	v.beRepaired(100);
	
}