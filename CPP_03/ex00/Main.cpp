#include "ClapTrap.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrima <mhrima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 06:11:48 by mhrima            #+#    #+#             */
/*   Updated: 2023/08/22 02:00:55 by mhrima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("clapTrap");
	ClapTrap clapTrap2("clapTrap2");
	ClapTrap clapTrap3("clapTrap3");

	clapTrap.setAttackDamage(5);
	clapTrap3.setAttackDamage(10);
	clapTrap.attack("clapTrap2");
	clapTrap2.takeDamage(clapTrap.getAttackDamage());
	clapTrap3.attack("clapTrap");
	clapTrap2.takeDamage(clapTrap.getAttackDamage());
	clapTrap3.attack("clapTrap2");
	clapTrap2.takeDamage(clapTrap3.getAttackDamage());
	clapTrap.beRepaired(2);
	clapTrap2.beRepaired(10);
}