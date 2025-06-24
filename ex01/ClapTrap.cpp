/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 14:29:12 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/24 22:21:52 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name): name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap" << name << " has been constructed." << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap" << name << " has been destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy): name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage){
        std::cout << "ClapTrap" << name << " has been copy constructed!." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy){
    std::cout << "Operator called" << std::endl;
    if(this != &copy)
    {
        name = copy.name;
        hitPoints = copy.hitPoints;
        attackDamage = copy.attackDamage;
        energyPoints = copy.energyPoints;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if(hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << " can't attack because it hasn't hit points!" << std::endl;
        return ;
    }
    if(energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " can't attack because it hasn't energy!" << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << RED << "ClapTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if(hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << "is already destroyed. Can not take damage anymore" << std::endl;
        return;
    }

    if(amount >= hitPoints)
    {
        hitPoints = 0;
        std::cout << "ClapTrap " << name << " takes " << amount << " point of damage and is destroyed " << std::endl;
    }
    else
    {
        hitPoints -= amount;
        std::cout << GREEN << "ClapTrap " << name << " takes " << amount << " point of damage! and hitpoint remaining: " << hitPoints << RESET << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if(hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << " Cannot be repaired because it is destroyed" << std::endl;
        return;
    }
    if(energyPoints == 0)
    {
        std::cout << "ClapTrap " << name  << " Cannot be repaired because it has no energy points left!" << std::endl;
        return;
    }

    energyPoints--;
    hitPoints += amount;
    std::cout << GREEN << "ClapTrap " << name << " repair itself for " << amount << " hit point! Current hitpoint: " << hitPoints  << RESET << std::endl;
}


unsigned int ClapTrap::getHitPoint() const{
    return hitPoints;
}
unsigned int ClapTrap::getEnergyPoints() const{
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const{
    return attackDamage;
}
std::string ClapTrap::getName() const{
    return name;
}