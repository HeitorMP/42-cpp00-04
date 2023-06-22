/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:44:01 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/17 15:59:46 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string _name;
public:
    Zombie(std::string name);
    Zombie();
    void setZombieName(std::string name);
    void announce( void );
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif