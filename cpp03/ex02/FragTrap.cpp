/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:18:41 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/31 11:11:04 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
	this->Name = "";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->maxEnergyPoints = 100;
	this->maxHitPoints = 100;
	std::cout<< "\033[31mFragTrap Default Constructor\033[0m"<<std::endl;
}

FragTrap::FragTrap(const std::string &Name) 
{
	this->Name = Name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->maxEnergyPoints = 100;
	this->maxHitPoints = 100;
	std::cout<< "\033[31mFragTrap Param Constructor\033[0m"<<std::endl;
}

FragTrap::~FragTrap() 
{
	std::cout<< "\033[31mFragTrap Destructor\033[0m"<<std::endl;  
}

FragTrap& FragTrap::operator=(const FragTrap& obj) 
{
	std::cout<< "\033[31mFragTrap Assignment  called\033[0m"<<std::endl; 
	this->Name = obj.Name;
    this->hitPoints = obj.hitPoints;
    this->maxHitPoints = obj.maxHitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
    this->maxEnergyPoints = obj.maxEnergyPoints;
	return (*this);
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout<< "\033[31mFragTrap Copy Constructor called\033[0m"<<std::endl; 
	*this = copy;
}

void FragTrap::attack(const std::string target)
{
	if (energyPoints != 0 && hitPoints != 0)
	{
		std::cout << "\033[31mFragTrap " << Name << " attacks " 
				  << target << ", causing " << attackDamage 
				  << " points of damage!\033[0m " <<std::endl;
		energyPoints--;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "\033[31mHigh Fives\033[0m"<< std::endl;
}

