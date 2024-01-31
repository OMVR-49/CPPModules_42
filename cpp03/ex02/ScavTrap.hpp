/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:15:09 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/30 18:48:52 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : protected ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const std::string &Name) ;
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(const ScavTrap& obj);

        void attack(const std::string& target);
        void guardGate();
};

#endif