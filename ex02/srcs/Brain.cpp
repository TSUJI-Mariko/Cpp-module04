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
    std::cout << "\033[31m" << "Brain Default constructor called"  << "\033[0m" << std::endl;
    return ;
}

Brain::Brain(const Brain &brain)
{
    std::cout << "\033[31m" << "Brain Copy constructor called"  << "\033[0m" << std::endl;
    *this = brain;
    return ;
}

Brain::~Brain(void)
{
    return ;
}

Brain & Brain::operator =(Brain const &brain)
{
    int i;
    if (this != &brain)
    {
        i = 0;
        while (i < 100)
        {
            this->_ideas[i] = brain._ideas[i];
            i++;
        }
    }
    return *this;
}

void    Brain::setIdeas(std::string idea, int const i)
{
    this->_ideas[i] = idea;
    return ;
}

std::string  const & Brain::getIdeas(int const i) const
{
    return (this->_ideas[i]);
};