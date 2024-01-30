/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:15:18 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/30 16:44:05 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// EX00:

ClapTrap:: ClapTrap() : Name("") , hitPoints(10) , energyPoints(10) , attackDamage(0),
maxEnergyPoints(10) , maxHitPoints(10)
{
	std::cout << "ClapTrap default  constructor called "<< Name << std::endl;
}

ClapTrap:: ClapTrap(const std::string& Name) : Name(Name) , hitPoints(10) , energyPoints(10) ,
attackDamage(0) , maxEnergyPoints(10) , maxHitPoints(10)
{
	std::cout << "ClapTrap parameterized  Constructor called "<< Name << std::endl;
	std::cout << "ClapTrap : "<< Name << std::endl;
	std::cout << "hitPoints = " << hitPoints << std::endl;
	std::cout << "energyPoints = " << energyPoints << std::endl;
	std::cout << "attackDamage = " << attackDamage << std::endl << std::endl;
}

ClapTrap:: ~ClapTrap()
{
	std::cout << "ClapTrap  Destructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->Name = rhs.Name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoints = rhs.energyPoints;
		this->attackDamage = rhs.attackDamage;
		this->maxEnergyPoints = rhs.maxEnergyPoints;
		this->maxHitPoints = rhs.maxHitPoints;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints != 0 && hitPoints != 0)
	{
		std::cout << "ClapTrap " << Name << " attacks " 
				  << target << ", causing " << attackDamage 
				  << " points of damage! " <<std::endl;
		energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)(hitPoints - amount) < 0)
		amount = hitPoints;
	if (hitPoints != 0 && amount != 0)
		std::cout << "ClapTrap " << Name << " take " << amount 
			  << " damage " << std::endl;
	hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((hitPoints + amount) > maxHitPoints)
		amount = maxHitPoints - hitPoints;
	if (energyPoints != 0 && amount != 0)
	{
		std::cout << "ClapTrap " << Name << " repairs itself with " 
				  << amount << " hitpoint " << std::endl;
		hitPoints += amount;
		energyPoints --; 
	}
}
