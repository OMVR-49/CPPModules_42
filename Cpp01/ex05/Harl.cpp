/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:32:48 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/25 00:10:19 by ojebbari         ###   ########.fr       */
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

void Harl::complain( std::string level )
{
	void (Harl::*fptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string stringOfArray[4] = {"DEBUG","INFO","WARNING","ERROR"};

	for(int index = 0; index < 4 ; index++)
	{
		if (level == stringOfArray[index])
		{
			(this->*fptr[index])();
			return;
		}
	}
	std::cout << "INVALID" << std::endl;
}
