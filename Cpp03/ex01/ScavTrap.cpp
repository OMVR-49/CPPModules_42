/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:15:11 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/31 12:12:22 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
	this->Name = "";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->maxEnergyPoints = 50;
	this->maxHitPoints = 100;
	std::cout<< "\033[92mScavTrap Constructor\033[0m"<<std::endl;
}

ScavTrap::ScavTrap(const std::string &Name)
{
	this->Name = Name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->maxEnergyPoints = 50;
	this->maxHitPoints = 100;
	std::cout<< "\033[92m" << "ScavTrap Paramerezied Constructor\033[0m"<<std::endl;
	std::cout << "Name : "<< Name << std::endl;
	std::cout << "hitPoints = " << hitPoints << std::endl;
	std::cout << "energyPoints = " << energyPoints << std::endl;
	std::cout << "attackDamage = " << attackDamage << std::endl << std::endl;
}

ScavTrap::~ScavTrap() 
{
	std::cout<< "\033[92mScavTrap Destructor\033[0m"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) 
{
	std::cout << "\033[92mScavTrap Copy Constructor Called\033[0m" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "\033[92mScavTrap assigenement operator called\033[0m" << std::endl;
	this->Name = obj.Name;
	this->hitPoints = obj.hitPoints;
	this->maxHitPoints = obj.maxHitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
	this->maxEnergyPoints = obj.maxEnergyPoints;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
   if (energyPoints != 0 && hitPoints != 0)
	{
		std::cout << "\033[92mScavTrap " << Name << " attacks " 
				  << target << ", causing " << attackDamage 
				  << " points of damage!\033[0m " <<std::endl;
		energyPoints--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "\033[92mScavTrap " << Name << " is now in Gate keeper mode\033[0m" << std::endl;
}
