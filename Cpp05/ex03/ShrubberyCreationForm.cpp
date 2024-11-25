/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:48:47 by ojebbari          #+#    #+#             */
/*   Updated: 2024/11/21 18:20:36 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// OCCF:

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->target = obj.target;
	return (*this);
}

// Others:
ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm("ShrubberyCreationForm", 145, 137) , target(target)
{
	
}

void  ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::ofstream tree(this->target + "_shrubbery");
	if (tree.is_open())
	{
		tree <<
			"        *\n"
            "       ***\n"
            "      *****\n"
            "     *******\n"
            "    *********\n"
            "   ***********\n"
            "  *************\n"
            " ***************\n"
            "       |||\n"
            "       |||\n"
            "       |||\n";
		tree.close();	
	}
}