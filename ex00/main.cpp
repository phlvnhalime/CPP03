/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 14:29:10 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/19 11:02:45 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(){

    std::cout << "===== ClapTrap Test Messages =====" << std::endl;

    std::cout << "----- Test 1 Constructor/Destructor ------" << std::endl;
    {
        ClapTrap warrior("HP");
        std::cout << "HP status :" << warrior.getHitPoint() << ", Energy" << warrior.getEnergyPoints() <<  ", Attack" << warrior.getAttackDamage() << std::endl;
    }

    
    
    
    
    
}