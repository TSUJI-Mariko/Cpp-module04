/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:06:24 by mtsuji            #+#    #+#             */
/*   Updated: 2022/12/01 18:06:27 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void)
{
    std::cout << "\033[35m" << "Animal Default constructor called"  << "\033[0m" << std::endl;
    return ;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "\033[35m" << "Animal Copy constructor called"  << "\033[0m" << std::endl;
    *this = animal;
    return ;
}

Animal::Animal(std::string const &type) : _type(type)
{
    std::cout << "\033[35m" << "Animal constructor called, string type is " << "\033[0m";
    std::cout << _type << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "\033[35m" << "Animal Destructor called"  << "\033[0m" << std::endl;
    return ;
}

Animal & Animal::operator =(Animal const &animal)
{
    std::cout << "\033[35m" << "Animal copy assignment operator called"  << "\033[0m" << std::endl;
    this->_type = animal._type;
    return *this;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal make any noise" << std::endl;
    return ;
}

std::string    const Animal::getType(void) const
{
    return (this->_type);
}

void   Animal::setType(std::string type)
{
    this->_type = type;
}