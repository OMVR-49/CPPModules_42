/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:26:46 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/25 23:50:37 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileDeal.hpp"

int main(int ac, char **av)
{
	if(ac != 4)
	{
		std::cerr << "usage : " << av[0] 
				  << " <name of file> <string to replace> <string to replace with>" << std::endl;
		return 1;
	}
	if (!av[2][0])
		return (0);
	std::string inFileName = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string outFileName = inFileName + ".replace";
	fileDeal fileDeal(inFileName, s1, s2);
	if(fileDeal.replaceAndSave())
		return 1;
	return (0);
}