/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:48:26 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/25 23:46:50 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
			  << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
			  << "years whereas you started working here since last month. " << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now. " << std::endl;
}

void Harl::switching( std::string level )
{
	std::string stringOfArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i;
	for(i = 0; i < 4; i++)
	{
		if (stringOfArray[i] == level)
			break;
	}
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
				debug();
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
				info();
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
				warning();
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
				error();
			std::cout << std::endl;
		break;
	default:
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
