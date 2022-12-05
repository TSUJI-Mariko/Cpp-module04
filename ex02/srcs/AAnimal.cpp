/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:06:24 by mtsuji            #+#    #+#             */
/*   Updated: 2022/12/01 18:06:27 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void) : _type("AAnimal")
{
    std::cout << "\033[35m" << "AAnimal Default constructor called"  << "\033[0m" << std::endl;
    return ;
}

AAnimal::AAnimal(const AAnimal &aanimal)
{
    std::cout << "\033[35m" << "AAnimal Copy constructor called"  << "\033[0m" << std::endl;
    *this = aanimal;
    return ;
}

AAnimal::~AAnimal(void)
{
    std::cout << "\033[35m" << "AAnimal Destructor called"  << "\033[0m" << std::endl;
    return ;
}

AAnimal & AAnimal::operator =(AAnimal const &aanimal)
{
    std::cout << "\033[35m" << "AAnimal copy assignment operator called"  << "\033[0m" << std::endl;
    this->_type = aanimal._type;
    return *this;
}

std::string    const AAnimal::getType(void) const
{
    return (this->_type);
}

void   AAnimal::setType(std::string type)
{
    this->_type = type;
}