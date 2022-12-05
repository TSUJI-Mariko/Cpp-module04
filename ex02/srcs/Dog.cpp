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

Dog::Dog(void) : AAnimal()
{
    std::cout << "\033[33m" << "Dog Default constructor called"  << "\033[0m" << std::endl;
    this->_brain = new Brain();
    this->_type = "Dog";
    return ;
}

Dog::Dog(Dog const &dog) : AAnimal(dog)
{
    std::cout << "\033[33m" << "Animal Copy constructor called"  << "\033[0m" << std::endl;
    this->_brain = new Brain();
    this->_type = "Dog";
    *this = dog;
    return ;
}

Dog::~Dog(void)
{
    std::cout << "\033[33m" << "Dog Destructor called"  << "\033[0m" << std::endl;
    delete this->_brain;
    return ;
}

Dog & Dog::operator =(Dog const &Dog)
{
    std::cout << "\033[33m" << "Dog copy assignment operator called"  << "\033[0m" << std::endl;
    int i;

    i = 0;
    while (i < 100)
    {
        this->_brain->setIdeas(Dog._brain->getIdeas(i), i);
        i++;
    }
    this->_type = Dog._type;
    return *this;
}

std::string  const & Dog::getIdea(int const i) const
{
    return (this->_brain->getIdeas(i));
}

void    Dog::setIdea(std::string idea, const int i)
{
    this->_brain->setIdeas(idea, i);
}

void Dog::makeSound(void) const
{
    std::cout << "Dog says Bow Wow Wow!" << std::endl;
    return ;
}