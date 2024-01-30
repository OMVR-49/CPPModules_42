/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:18:41 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/30 18:35:05 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() 
{}

FragTrap::~FragTrap() 
{}

FragTrap::FragTrap(const FragTrap& copy) {
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) {
    if (this != &obj) {
        this->(the attribute name) = obj.(the attribute name);
    }
    return (*this);
}