/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:11:36 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/23 13:23:34 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("ssefa7", club);
		bob.attack();
		club.setType("menjel");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Blade Vanquisherr");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Reaper's Edge");
		jim.attack();
	}
	return 0;
}