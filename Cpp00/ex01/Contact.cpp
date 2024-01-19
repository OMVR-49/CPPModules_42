/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:01:54 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/17 22:01:42 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool is_valid_input(const std::string& input, int x)
{
    int i = 0;

    if (x == 0)
    {
        while (i < static_cast<int>(input.length()))
		{
			if (std::isalpha(input[i]))
				return true;
			i++;
		}
		return false;
	}
	else
	{
        while (i < static_cast<int>(input.size()))
		{
			if (!std::isdigit(input[i]))
				return false;
			i++;
		}
	}
	if (i == 0)
		return false;
	return true;
}

void	Contact::sdarkest_secret()
{
	std::string line;

	std::cout << "Enter a dark secret about your contact" << std::endl;
	if (std::getline(std::cin, line).eof())
	{
		std::cout << "\nGoodbye 👋 , See u soon ..." << std::endl;
		exit(0);
	}
	Contact::DarkestSecret = line;
}
void	Contact::sphone_number()
{
	std::string line;

	std::cout << "Enter the phone number of your contact" << std::endl;
	if (std::getline(std::cin, line).eof())
	{
		std::cout << "\nGoodbye 👋 , See u soon ..." << std::endl;
		exit(0);
	}
	while (!is_valid_input(line, 1))
	{
		std::cout << "Enter a valid phone number for your contact" << std::endl;
		if (std::getline(std::cin, line).eof())
		{
			std::cout << "\nGoodbye 👋 , See u soon ..." << std::endl;
			exit(0);
		}
	}
	Contact::PhoneNumber = line;
}
void	Contact::snickname()
{
	std::string line;

	std::cout << "Enter a nickname for your contact" << std::endl;
	if (std::getline(std::cin, line).eof())
	{
		std::cout << "\nGoodbye 👋 , See u soon ..." << std::endl;
		exit(0);
	}
	while (!is_valid_input(line, 0))
	{
		std::cout << "Enter a valid nickname for your contact" << std::endl;
		if (std::getline(std::cin, line).eof())
		{
			std::cout << "\nGoodbye 👋 , See u soon ..." << std::endl;
			exit(0);
		}
	}
	Contact::Nickname = line;
}
void	Contact::slast_Name()
{
	std::string line;

	std::cout << "Enter the last name of your contact" << std::endl;
	if (std::getline(std::cin, line).eof())
	{
		std::cout << "\nGoodbye 👋 , See u soon ..." << std::endl;
		exit(0);
	}
	while (!is_valid_input(line, 0))
	{
		std::cout << "Enter a valid last name for your contact" << std::endl;
		if (std::getline(std::cin, line).eof())
		{
			std::cout << "\nGoodbye 👋 , See u soon ..." << std::endl;
			exit(0);
		}
	}
	Contact::LastName = line;
}

void	Contact::sfirst_name()
{
	std::string line;

	std::cout << "Enter the first name of your contact" << std::endl;
	if (std::getline(std::cin, line).eof())
	{
		std::cout << "\nGoodbye 👋 , See u soon ..." << std::endl;
		exit(0);
	}
	while (!is_valid_input(line, 0))
	{
		std::cout << "Enter a valid first name for your contact" << std::endl;
		if (std::getline(std::cin, line).eof())
		{
			std::cout << "\nGoodbye 👋 , See u soon ..." << std::endl;
			exit(0);
		}
	}
	Contact::FirstName = line;
}

std::string	Contact::gfirst_name()
{
	return (FirstName);
}

std::string	Contact::glast_Name()
{
	return (LastName);
}

std::string	Contact::gnickname()
{
	return (Nickname);
}

std::string	Contact::gphone_number()
{
	return (PhoneNumber);
}

std::string	Contact::gdarkest_secret()
{
	return (DarkestSecret);
}
