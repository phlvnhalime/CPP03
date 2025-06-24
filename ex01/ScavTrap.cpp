/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 23:23:24 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/24 22:23:51 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
    ScavTrap will use the attributes of ClapTrap (update ClapTrap accordingly) and
    must initialize them to:
    •Name, which is passed as a parameter to the constructor
    •Hit points (100), representing the health of the ClapTrap
    •Energy points (50)
    •Attack damage (20)
*/

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << "has been constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy.name){
    std::cout << "ScavTrap has been copy constructed!" << std::endl; 
}


ScavTrap& ScavTrap::operator=(const ScavTrap& copy){
    std::cout << "Operator called" << std::endl;
    if(this != &copy)
    {
        name = copy.name;
        hitPoints = copy.hitPoints;
        attackDamage = copy.attackDamage;
        energyPoints = copy.energyPoints;
    }
    return  *this; // I'm not sure is it nessesary or not

}
void ScavTrap::attack(const std::string& target){
    if(hitPoints == 0)
    {
        std::cout << "ScavTrap " << name << " can't attack because it hasn't hit points!" << std::endl;
        return ;
    }
    if(energyPoints == 0)
    {
        std::cout << "ScavTrap " << name << " can't attack because it hasn't energy!" << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << RED << "ScavTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << RESET << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << name << "has guard gate right now!" << std::endl;
}


ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap has been destructor" << std::endl;
}