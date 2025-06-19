/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 14:29:10 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/19 16:13:57 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <sstream>

int main(){

    std::cout << "===== ClapTrap Test Messages =====" << std::endl;

    std::cout << "----- Test 1 Constructor/Destructor ------" << std::endl;
    {
        std::cout << std::endl;
        ClapTrap Jedi(" Obi-Wan Kenobi");
        std::cout << std::endl;
        std::cout << BLUE << "HP status : " << Jedi.getHitPoint() << ", Energy : " << Jedi.getEnergyPoints() <<  ", Attack : " << Jedi.getAttackDamage() << RESET << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "----- Test 2: Attack 1(without damage) -----" << std::endl;
    {
        std::cout << std::endl;
        ClapTrap theSith(" Anakin");
        std::cout << std::endl;
        theSith.attack("Stormtrooper");
        theSith.attack("Palpatine(Darth Sidious)");
        theSith.attack("Emperor");
        std::cout << "Energy remaining: " << theSith.getEnergyPoints() << std::endl;
        std::cout << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << "----- Test 3: Damage -----" << std::endl;
    {
        std::cout << std::endl;
        ClapTrap theSithOrder(" DarthVader");
        std::cout << std::endl;
        theSithOrder.takeDamage(3);
        theSithOrder.takeDamage(5);
        theSithOrder.takeDamage(2);
        theSithOrder.takeDamage(1);
        std::cout << std::endl;
    }
    std::cout <<std::endl;
    
    
    std::cout << "----- Test 4: Rapairing -----" << std::endl;
    {
        std::cout << std::endl;
        ClapTrap theSith2(" Galen Marek");
        std::cout << std::endl;
        theSith2.takeDamage(7);
        theSith2.beRepaired(5);
        theSith2.beRepaired(3);
        std::cout << "Final HP: " << theSith2.getHitPoint() << ", Energy: " << theSith2.getEnergyPoints() << std::endl;
        std::cout << std::endl;
    }
    std::cout <<std::endl;
    
    std::cout << "----- Test 5 : Energy Deplete ----" << std::endl;
    {
        std::cout << std::endl;
        ClapTrap theSith3(" Energy");
        std::cout << std::endl;
        for(int i = 0; i < 10 ; i++)
        {
            std::string target = "Target: ";
            std::ostringstream oss;
            // Convert integer to str. version of c++98 but we can use to_string for c++11 version.
            oss << (i + 1);
            target += oss.str(); // into the line 
            theSith3.attack(target);
        }
        theSith3.attack("Final Target");
        theSith3.beRepaired(5);
        std::cout << std::endl;
    }
    std::cout <<std::endl;

    std::cout << "----- Test 6 : Dead Action ----" << std::endl;
    {
        std::cout << std::endl;
        ClapTrap theSithOrder2(" DarthVader2");
        std::cout << std::endl;
        theSithOrder2.takeDamage(10);
        theSithOrder2.attack("someone");
        theSithOrder2.beRepaired(5);
        std::cout << std::endl;
    }
    std::cout <<std::endl;

    std::cout << "----- Test 7 : Copy Constructor ----" << std::endl;
    {
        std::cout << std::endl;
        ClapTrap orginal(" Orginal");
        std::cout << std::endl;
        orginal.takeDamage(2);
        orginal.attack("test");
        std::cout << std::endl;
        
        ClapTrap copy1(orginal);
        std::cout << std::endl;
        ClapTrap copy2(" Temp");
        std::cout << std::endl;
        copy2 = orginal;
        
        std::cout << "Orginal status: " << orginal.getHitPoint() << ", Energy " << orginal.getEnergyPoints()  << std::endl;
        std::cout << "Copy1 status: " << copy1.getHitPoint() << ", Energy " << copy1.getEnergyPoints()  << std::endl;
        std::cout << "Copy2 status: " << copy2.getHitPoint() << ", Energy " << copy2.getEnergyPoints()  << std::endl;
        std::cout <<std::endl;
    }
    std::cout <<std::endl;

    std::cout << RED << "Finally End! We fight with this code much" << RESET << std::endl;
    std::cout << std::endl;
    return 0;
}