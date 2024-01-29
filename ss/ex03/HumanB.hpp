/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:01:36 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/23 13:12:42 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB();
		HumanB(const std::string& Name);
        void setWeapon(Weapon& humanWeapon);
		void attack()const;
		~HumanB();
};

#endif