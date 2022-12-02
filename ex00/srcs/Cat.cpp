/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:06:48 by mtsuji            #+#    #+#             */
/*   Updated: 2022/12/01 18:06:50 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "\033[31m" << "Cat Default constructor called"  << "\033[0m" << std::endl;
    return ;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "\033[31m" << "Cat Copy constructor called"  << "\033[0m" << std::endl;
    *this = cat;
    return ;
}

Cat::~Cat(void)
{
    std::cout << "\033[31m" << "Cat Destructor called"  << "\033[0m" << std::endl;
    return ;
}

Cat & Cat::operator =(Cat const &cat)
{
    std::cout << "\033[31m" << "Cat copy assignment operator called"  << "\033[0m" << std::endl;
    this->_type = cat._type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat has no sound" << std::endl;
    return ;
}