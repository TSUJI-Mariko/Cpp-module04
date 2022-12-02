/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuji <mtsuji@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:07:26 by msuji             #+#    #+#             */
/*   Updated: 2022/12/02 12:07:28 by msuji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &wronganimal);
        WrongAnimal(std::string const &type);
        virtual ~WrongAnimal(void);
        WrongAnimal &operator =(WrongAnimal const &wronganimal);

        void makeSound(void) const;
        std::string    const &getType(void) const;

    protected:
        std::string _type;
};

#endif
