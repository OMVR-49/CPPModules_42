/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:48:16 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/26 04:03:45 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac , char **av)
{
	if (ac == 2)
	{
		Harl obj;
		obj.switching(av[1]);
	}
	else
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
	return 0;
}
