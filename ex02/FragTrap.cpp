/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 22:02:44 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/24 22:27:15 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name): ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " has been constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy.name){
    std::cout << "FragTrap has been copy constructed!" << std::endl; 
}


FragTrap& FragTrap::operator=(const FragTrap& copy){
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
void FragTrap::attack(const std::string& target){
    if(hitPoints == 0)
    {
        std::cout << "FragTrap " << name << " can't attack because it hasn't hit points!" << std::endl;
        return ;
    }
    if(energyPoints == 0)
    {
        std::cout << "FragTrap " << name << " can't attack because it hasn't energy!" << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << RED << "FragTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << RESET << std::endl;
}
/*

*/
void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << name << " requestes a big positive high-five(world peace)✋" << std::endl;
}

 FragTrap::~FragTrap(){
    std::cout << "FragTrap " << name << " has been destroyed" << std::endl;
 }