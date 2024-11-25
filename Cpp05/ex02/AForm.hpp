/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:34:23 by ojebbari          #+#    #+#             */
/*   Updated: 2024/11/21 18:15:13 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <unistd.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool Signed;
		const int RequiredToSign;
		const int RequiredToExecute;
	public:
	// OCCF:
		AForm();
		AForm(const AForm&copy);
		AForm& operator=(const AForm& obj);
		virtual ~AForm();
	// others:
		AForm(const std::string& name , const int RTS, const int RTE);
		void beSigned(const Bureaucrat& bureaucrat);
	// getters:
		const std::string& getName() const;
		bool getSigned() const;
		int getRequiredToSign() const;
		int getRequiredToExecute() const;
	// Exceptions:
	class GradeTooHighException : public std::exception{
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
            const char* what() const throw();
    };
	class UnsignedFormException : public std::exception{
			const char* what() const throw();
	};
	// pure virtual func (ex02):
		virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif