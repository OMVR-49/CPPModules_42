/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:43:40 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/22 10:10:40 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
			std::string FirstName;
			std::string LastName;
			std::string Nickname;
			std::string PhoneNumber;
			std::string DarkestSecret;
	public:
			void	sfirst_name();
			void	slast_Name();
			void	snickname();
			void	sphone_number();
			void	sdarkest_secret();

			std::string	gfirst_name();
			std::string	glast_Name();
			std::string	gnickname();
			std::string	gphone_number();
			std::string	gdarkest_secret();
};

void gb();

#endif