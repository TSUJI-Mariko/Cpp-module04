/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuji <mtsuji@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:44:14 by msuji             #+#    #+#             */
/*   Updated: 2022/12/02 12:44:16 by msuji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "\033[34m" << "WrongCat Default constructor called"  << "\033[0m" << std::endl;
    return ;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
    std::cout << "\033[34m" << "WrongAnimal Copy constructor called"  << "\033[0m" << std::endl;
    *this = wrongcat;
    return ;
}

WrongCat::~WrongCat(void)
{
    std::cout << "\033[34m" << "WrongCat Destructor called"  << "\033[0m" << std::endl;
    return ;
}

WrongCat & WrongCat::operator =(WrongCat const &wrongCat)
{
    std::cout << "\033[34m" << "WrongCat copy assignment operator called"  << "\033[0m" << std::endl;
    this->_type = wrongCat._type;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat says nothing!" << std::endl;
    return ;
}