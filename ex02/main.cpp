/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 14:29:10 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/24 22:19:53 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <sstream>

int main(){

    std::cout << "===== ClapTrap Test =====" << std::endl;
    ClapTrap clap("IMCLAPPY");
    clap.attack("ENEMY");
    clap.beRepaired(3);
    clap.takeDamage(5);

    std::cout << "===== ScavTrap Test =====" << std::endl;
    ScavTrap scav("IMSCAV");
    scav.attack("Gatecrasher");
    scav.guardGate();
    scav.takeDamage(50);

    std::cout << "===== FragTrap Test =====" << std::endl;
    FragTrap frag("IMFRAG");
    frag.attack("target");
    frag.highFivesGuys();
    frag.takeDamage(30);
    frag.beRepaired(15);

    /*
        Proper construction/destruction chaining 
        must be shown in your tests. When a FragTrap is created,
        the program starts by constructing a ClapTrap. 
        Destruction occurs in reverse order.
    */
    std::cout << "===== FragTrap construction/destruction chaining =====" << std::endl;
    FragTrap frag2("Destroyed");
    frag2.highFivesGuys();
    
    return 0;
}