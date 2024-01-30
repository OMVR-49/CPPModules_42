/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:16:55 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/30 18:34:45 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap {
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap& copy);
        FragTrap& operator=(const FragTrap& obj);
};

#endif