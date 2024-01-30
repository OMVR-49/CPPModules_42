/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:15:11 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/30 18:33:01 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
    std::cout<< "Scavtrap Constructor"<<std::endl;
}

ScavTrap::ScavTrap(const std::string &Name)
{
    this->Name = Name;
    std::cout<< "Scavtrap Paramerezied Constructor"<<std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout<< "Scavtrap Destructor"<<std::endl;    
}

ScavTrap::ScavTrap(const ScavTrap& copy) 
{
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj){

    this->ClapTrap::operator=(obj);
    return (*this);
}
void ScavTrap::attack(const std::string& target)
{
   if (energyPoints != 0 && hitPoints != 0)
	{
		std::cout << "ScavTrap " << Name << " attacks " 
				  << target << ", causing " << attackDamage 
				  << " points of damage! " <<std::endl;
		energyPoints--;
	}
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode" << std::endl;
}
