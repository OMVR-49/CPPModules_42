/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:01:02 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/18 23:11:16 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string line;
    PhoneBook PhoneB;

    while (!(std::cin.eof)())
    {
        std::cout << "Enter a command : " << std::endl;
        std::getline(std::cin, line);
        if (line == "ADD")
            PhoneB.add();
        else if (line == "SEARCH")
            PhoneB.search();
        else if (line == "EXIT")
            return(0);
        else
            std::cout << "Enter a valid command 🤨 : " << std::endl;
    }
    return (0);
}
