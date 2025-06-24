/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 14:29:10 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/24 22:28:44 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <sstream>

int main(){

    ClapTrap clap("IMCLAPPY");
    clap.attack("ENEMY");
    clap.beRepaired(3);
    clap.takeDamage(5);

    ScavTrap scav("IMSCAV");
    scav.attack("Gatecrasher");
    scav.guardGate();
    scav.takeDamage(50);
    
    return 0;
}