/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuji <mtsuji@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:44:26 by msuji             #+#    #+#             */
/*   Updated: 2022/12/02 12:44:27 by msuji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "\033[32m" << "WrongAnimal Default constructor called"  << "\033[0m" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
    std::cout << "\033[32m" << "WrongAnimal Copy constructor called"  << "\033[0m" << std::endl;
    *this = wronganimal;
    return ;
}
WrongAnimal::WrongAnimal(std::string const &type) : _type(type)
{
    std::cout << "\033[32m" << "Wrong Animal constructor called, string type is " << "\033[0m";
    std::cout << _type << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "\033[32m" << "WrongAnimal Destructor called"  << "\033[0m" << std::endl;
    return ;
}

WrongAnimal & WrongAnimal::operator =(WrongAnimal const &wronganimal)
{
    std::cout << "\033[32m" << "WrongAnimal copy assignment operator called"  << "\033[0m" << std::endl;
    this->_type = wronganimal._type;
    return *this;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "no sound for WrongAnimal" << std::endl;
    return ;
}

std::string    const & WrongAnimal::getType(void) const
{
    return (this->_type);
}