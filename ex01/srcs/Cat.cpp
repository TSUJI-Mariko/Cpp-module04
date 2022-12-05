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
    std::cout << "\033[36m" << "Cat Default constructor called"  << "\033[0m" << std::endl;
    this->_brain = new Brain();
    return ;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    std::cout << "\033[36m" << "Cat Copy constructor called"  << "\033[0m" << std::endl;
    this->_brain = new Brain();
    *this = cat;
    return ;
}

Cat::~Cat(void)
{
    std::cout << "\033[36m" << "Cat Destructor called"  << "\033[0m" << std::endl;
    delete this->_brain;
    return ;
}

Cat & Cat::operator =(Cat const &cat)
{
    std::cout << "\033[36m" << "Cat copy assignment operator called"  << "\033[0m" << std::endl;
    int i;

    i = 0;
    while (i < 100)
    {
        this->_brain->setIdeas(cat._brain->getIdeas(i), i);
        i++;
    }
    this->_type = cat._type;
    return *this;
}

std::string const & Cat::getIdea(int const i) const
{
    return (this->_brain->getIdeas(i));
}

void    Cat::setIdea(std::string idea, const int i)
{
    this->_brain->setIdeas(idea, i);
}

void Cat::makeSound(void) const
{
    std::cout << "Cat has no sound" << std::endl;
    return ;
}