/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:13:20 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/22 12:33:10 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"
#include <iomanip>


class PhoneBook
{
    private:
        Contact Contacts[8];
        int id;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    add();
        void	printTableRow();
        void    search();
		void	get_info(std::string str);
};

bool is_valid_input(const std::string& input, int x);

#endif