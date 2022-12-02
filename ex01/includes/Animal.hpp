/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:49:21 by mtsuji            #+#    #+#             */
/*   Updated: 2022/12/01 17:49:26 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
    public:
        Animal(void);
        Animal(const Animal &animal);
        Animal(std::string const &type);
        virtual ~Animal(void);
        Animal &operator =(Animal const &animal);

        virtual void makeSound(void) const;
        std::string    const &getType(void) const;

    protected:
        std::string _type;
};

#endif
