/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:15:18 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/31 11:06:06 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// EX00:

ClapTrap:: ClapTrap() : Name("") , hitPoints(10) , energyPoints(10) , attackDamage(0),
maxEnergyPoints(10) , maxHitPoints(10)
{
	std::cout << "\033[93mClapTrap default constructor called \033[0m"<< Name << std::endl;

}

ClapTrap:: ClapTrap(const std::string& Name) : Name(Name) , hitPoints(10) , energyPoints(10) ,
attackDamage(0) , maxEnergyPoints(10) , maxHitPoints(10)
{
	std::cout << "\033[93mClapTrap parameterized Constructor called "<< Name << std::endl;
	std::cout << "ClapTrap : "<< Name << std::endl;
	std::cout << "hitPoints = " << hitPoints << std::endl;
	std::cout << "energyPoints = " << energyPoints << std::endl;
	std::cout << "attackDamage = \033[0m" << attackDamage << std::endl << std::endl;
}

ClapTrap:: ~ClapTrap()
{
	std::cout << "\033[93mClapTrap Destructor Called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "\033[93mCopy assignment operator called\033[0m" << std::endl;
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
		std::cout << "\033[93mClapTrap " << Name << " attacks " 
				  << target << ", causing " << attackDamage 
				  << " points of damage!\033[0m " <<std::endl;
		energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)(hitPoints - amount) < 0)
		amount = hitPoints;
	if (hitPoints != 0 && amount != 0)
		std::cout << "\033[93mClapTrap " << Name << " take " << amount 
			  << " damage \033[0m" << std::endl;
	hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((hitPoints + amount) > maxHitPoints)
		amount = maxHitPoints - hitPoints;
	if (energyPoints != 0 && amount != 0)
	{
		std::cout << "\033[93mClapTrap " << Name << " repairs itself with " 
				  << amount << " hitpoint \033[0m" << std::endl;
		hitPoints += amount;
		energyPoints --; 
	}
}
