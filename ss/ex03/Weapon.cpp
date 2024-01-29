/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:37:13 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/25 23:06:21 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weaponType) : type(weaponType){}

void	Weapon::setType(const std::string& newType)
{
	this->type = newType;
}

const std::string	Weapon::getType(void) const
{
	return (this->type);
}
