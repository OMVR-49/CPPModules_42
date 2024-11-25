/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:33:48 by ojebbari          #+#    #+#             */
/*   Updated: 2024/11/21 12:39:33 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// OCCF:
Intern::Intern()
{}

Intern::Intern(const Intern& copy) {*this = copy;}

Intern& Intern::operator=(const Intern& obj) {(void)obj; return (*this);}

Intern::~Intern()
{}

// Helper functions
AForm* Intern::makeShrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::makePresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    int formIndex = -1 + (formName == "shrubbery creation") + 2 * (formName == "robotomy request") + 3 * (formName == "presidential pardon");
    AForm* (Intern::*forms[])(std::string) = {
        &Intern::makeShrubberyCreationForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makePresidentialPardonForm
    };
    if (formIndex == -1 || formIndex > 2)
        throw FormNotFoundException();
    std::cout << "Intern creates " << formName << std::endl;
    return (this->*forms[formIndex])(target);
}