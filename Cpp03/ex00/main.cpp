/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:12:42 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/31 11:14:15 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap instence("Omar");
	ClapTrap k("Sami");
	ClapTrap copy(k);

	instence.attack("Boot");
	instence.attack("Boot");
	instence.attack("Boot");
	instence.attack("Boot");
	instence.attack("Boot");
	instence.attack("Boot");
	instence.attack("Boot");
	instence.attack("Boot");
	instence.attack("Boot");
	instence.attack("Boot");
	instence.attack("Boot");
	instence.attack("Boot");
	instence.takeDamage(22);
	instence.attack("Spiderman");
	instence.takeDamage(2);
	instence.beRepaired(8);
	instence.attack("Batman");
	instence.beRepaired(2);
	instence.beRepaired(11);

	copy.attack("Super man");
	copy.takeDamage(22);
	copy.attack("Iron man");
	copy.takeDamage(2);
	copy.beRepaired(8);
	copy.attack("Doctor Strange");
	copy.beRepaired(2);
	copy.beRepaired(11);
}