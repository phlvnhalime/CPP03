/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 22:02:48 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/24 22:11:54 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
     // Constructor
        FragTrap(const std::string& name);
        // Copy of constructor
        FragTrap(const FragTrap& copy);
        // Assigment operator
        FragTrap& operator=(const FragTrap& copy);

        ~FragTrap();

        void highFivesGuys(void);
        void attack(const std::string& target);

};

