/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:30:48 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/25 19:07:20 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    this->name = "unkown";
}


Zombie::Zombie(std::string& Name) : name(Name){}

Zombie::~Zombie()
{
    std::cout << name << ": get Destroyed" << std::endl;
}

void Zombie::setName(std::string& newName)
{
    name = newName;
}

Zombie* newZombie(std::string name)
{
    Zombie *newZombie = new Zombie();
    newZombie->setName(name);
    return (newZombie);
}