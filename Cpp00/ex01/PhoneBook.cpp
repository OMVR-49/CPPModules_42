/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:34:25 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/22 12:40:56 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : id(0)
{
	std::cout << "Welcome to the 80s and our unbelievable technology! "
				"here is a program like a crappy awesome phonebook software 😟"
				" u cand add up to 8 contacts"
				<< std::endl;
	
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "\nGoodbye 👋 , See u soon ..." << std::endl;
}

void gb()
{
	std::cout << "\nGoodbye 👋 , See u soon ..." << std::endl;
		exit(0);
}

void PhoneBook::add()
{
	if (id >= 8)
		std::cout << "Warning : u will overwite on a contact that u already put ur max is 8" << std::endl;
	Contacts[id%8].sfirst_name();
	Contacts[id%8].slast_Name();
	Contacts[id%8].snickname();
	Contacts[id%8].sphone_number();
	Contacts[id%8].sdarkest_secret();
	std::cout << "Contact added succefully it's index is " << id%8 << std::endl;
	this->id++;
}

void PhoneBook::printTableRow()
{
	int i = 0;

	while(i < this->id && i < 8)
    {
		std::cout << "|" << std::setw(10)<< std::right << i
              << "|" << std::setw(10) << std::right << (this->Contacts[i].gfirst_name().length() > 10 ? this->Contacts[i].gfirst_name().substr(0, 9) + "." : this->Contacts[i].gfirst_name())
              << "|" << std::setw(10) << std::right << (this->Contacts[i].glast_Name().length() > 10 ? this->Contacts[i].glast_Name().substr(0, 9) + "." : this->Contacts[i].glast_Name())
              << "|" << std::setw(10) << std::right << (this->Contacts[i].gnickname().length() > 10 ? this->Contacts[i].gnickname().substr(0, 9) + "." : this->Contacts[i].gnickname())
              << "|" << std::endl;
		i++;
	}
}

void PhoneBook::get_info(const std::string str)
{
	if (!is_valid_input(str, 2))
	{
		std::cout << "print a valid index 😑" << std::endl;
		return;
	}
	else
	{
		int i = std::atoi(str.c_str());
		if (i >= this->id || i < 0)
			std::cout << "out of range 😑" << std::endl;
		else
		{
			std::cout << "first name : " << this->Contacts[i].gfirst_name() << std::endl;
			std::cout << "last name : " << this->Contacts[i].glast_Name() << std::endl;
			std::cout << "Nickname : " << this->Contacts[i].gnickname() << std::endl;
			std::cout << "Phone number : " << this->Contacts[i].gphone_number() << std::endl;
			std::cout << "Darkest secret : " << this->Contacts[i].gdarkest_secret() << std::endl;
		}
		return ;
	}
	
}

void PhoneBook::search(void)
{
	std::string str;

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl ;
	printTableRow();
	std::cout << "Enter an index of a contact to see all their informations : " << std::endl ;
	if (std::getline(std::cin, str).eof())
		gb();
	get_info(str);
}
