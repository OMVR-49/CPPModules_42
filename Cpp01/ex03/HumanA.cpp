/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 03:19:36 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/25 00:10:48 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& Name, Weapon &weaponType) : name(Name), weapon(weaponType) {}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << this->weapon.getType() << std::endl;
}