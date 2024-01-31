/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:13:44 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/31 10:56:31 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string Name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
		unsigned int maxEnergyPoints;
		unsigned int maxHitPoints;
	public:
	// OCCF:
		ClapTrap();
		ClapTrap(const std::string &Name);
		ClapTrap(const ClapTrap &src);
		ClapTrap &operator=(const ClapTrap &rhs);
		~ClapTrap();
	//Public member function:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif