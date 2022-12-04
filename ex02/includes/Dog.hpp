/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:56:14 by mtsuji            #+#    #+#             */
/*   Updated: 2022/12/01 17:56:18 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog &dog);
        virtual ~Dog(void);
        Dog &operator =(Dog const &dog);
        std::string  const & getIdea(int const i) const;
        void    setIdea(std::string idea, const int i);
        void makeSound(void) const;
    
    private:
        Brain   *_brain;
};

#endif


