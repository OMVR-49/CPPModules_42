/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:13:44 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/30 16:10:12 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
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
		ClapTrap(ClapTrap &src);
		ClapTrap &operator=(const ClapTrap &rhs);
		~ClapTrap();
	//Public member function:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif