/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:33:14 by ojebbari          #+#    #+#             */
/*   Updated: 2024/11/21 12:45:47 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
	private:
		AForm* makeShrubberyCreationForm(std::string target);
		AForm* makeRobotomyRequestForm(std::string target);
		AForm* makePresidentialPardonForm(std::string target);
	public:
		// OCCF:
		Intern();
		Intern(const Intern& other);
		~Intern();
		Intern& operator=(const Intern& other);
		// Others:
		AForm* makeForm(std::string formName, std::string target);
		// Exceptions:
		class FormNotFoundException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Form type not found";
				}
		};
};

#endif