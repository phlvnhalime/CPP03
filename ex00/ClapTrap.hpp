/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 14:29:15 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/19 10:59:51 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{

    private:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    public:
        // Constructor;
        ClapTrap(const std::string& name);

        // Copy Constructor
        ClapTrap(const ClapTrap& copy);

        // Assignment operator
        ClapTrap& operator=(const ClapTrap& copy);
        
        //Destructor
        ~ClapTrap();

        // Copy assignment
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        // For testing get the variable;
        unsigned int getHitPoint() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamage() const;
        std::string getName() const;   
};

#endif