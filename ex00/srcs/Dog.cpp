/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:06:35 by mtsuji            #+#    #+#             */
/*   Updated: 2022/12/01 18:06:39 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
std::cout << "\033[33m" << "Dog Default constructor called"  << "\033[0m" << std::endl;
    return ;
}
Dog::Dog(const Dog &dog)
{
    std::cout << "\033[33m" << "Animal Copy constructor called"  << "\033[0m" << std::endl;
    *this = dog;
    return ;
}
Dog::~Dog(void)
{
    std::cout << "\033[33m" << "Dog Destructor called"  << "\033[0m" << std::endl;
    return ;
}
Dog & Dog::operator =(Dog const &Dog)
{
    std::cout << "\033[33m" << "Dog copy assignment operator called"  << "\033[0m" << std::endl;
    this->_type = Dog._type;
    return *this;
}
void Dog::makeSound(void) const
{
    std::cout << "Dog says Bow Wow Wow!" << std::endl;
    return ;
}