/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 23:23:39 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/24 22:28:58 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
    public:
        // Constructor
        ScavTrap(const std::string& name);
        // Copy of constructor
        ScavTrap(const ScavTrap& copy);
        // Assigment operator
        ScavTrap& operator=(const ScavTrap& copy);
        // destructor
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};

