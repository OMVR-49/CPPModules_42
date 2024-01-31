/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:12:23 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/31 10:46:26 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("Omar");
	FragTrap c(a);
	FragTrap v = c;
	FragTrap k ("legendry boot");

	c.attack("enemy");
	c.takeDamage(105);
	k.attack("enemy");
	c.takeDamage(0);
	c.beRepaired(20);
	// c.highFivesGuys();
	v.attack("enemy");
	c.beRepaired(85);
	// k.highFivesGuys();
	c.beRepaired(20);
	k.takeDamage(99);
	c.beRepaired(100);
	k.beRepaired(100);
}