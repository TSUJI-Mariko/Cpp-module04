/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuji <mtsuji@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:08:00 by msuji             #+#    #+#             */
/*   Updated: 2022/12/02 17:08:02 by msuji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
    std::cout << "\033[35m" << "Brain Default constructor called"  << "\033[0m" << std::endl;
    return ;
}

Brain::Brain(const Brain &brain)
{
    std::cout << "\033[35m" << "Brain Copy constructor called"  << "\033[0m" << std::endl;
    *this = brain;
    return ;
}

Brain::Brain(std::string const &type)
{
    std::cout << "\033[35m" << "Brain constructor called, string type is " << "\033[0m";
    std::cout << _idea << std::endl;
}

Brain::~Brain(void)
{
    return ;
}

Brain & Brain::operator =(Brain const &brain)
{
    return ;
}

void    Brain::makeSound(void) const
{
    return ;
}

std::string  const & Brain::getIdea(void) const
{
    //return (this->_ideas);
};