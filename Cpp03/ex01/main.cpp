/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:12:40 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/31 12:14:23 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Omar");
	ScavTrap c(a);
	ScavTrap v = c;
	ScavTrap k ("super");

	c.attack("Soufiane");
	c.takeDamage(105);
	c.attack("Soufiane");
	c.takeDamage(0);
	c.beRepaired(20);
	c.guardGate();
	c.attack("Soufiane");
	c.beRepaired(85);
	k.guardGate();
	c.beRepaired(20);
	c.takeDamage(99);
	c.beRepaired(100);
	v.beRepaired(100);
}