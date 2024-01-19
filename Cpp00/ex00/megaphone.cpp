/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:20:19 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/12 17:12:34 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int	main(int ac , char **av)
{
	int i = 1, j = 0;
	if (ac > 1)
	{
		while(av[i])
		{
			j  = 0;
			while (av[i][j])
				std::cout << (char)std::toupper(av[i][j++]);
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
	
}