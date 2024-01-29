/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 03:19:40 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/23 13:13:26 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : name("human") , weapon(NULL){}

HumanB::HumanB(const std::string& Name) : name(Name), weapon(NULL){}

HumanB::~HumanB(){};

void HumanB::attack()const
{
   if (weapon) 
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " Has No weapon to attack" << std::endl;
}

void HumanB::setWeapon(Weapon& humanWeapon)
{
	this->weapon = &humanWeapon;
}