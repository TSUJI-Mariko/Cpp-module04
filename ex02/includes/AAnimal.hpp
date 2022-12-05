/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:49:21 by mtsuji            #+#    #+#             */
/*   Updated: 2022/12/01 17:49:26 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>
#include <string>

class AAnimal
{
    public:
        AAnimal(void);
        AAnimal(const AAnimal &aanimal);
        virtual ~AAnimal(void);
        
        AAnimal &operator =(AAnimal const &aanimal);

        virtual void makeSound(void) const = 0;
        std::string    const getType(void) const;
        void    setType(std::string type);

    protected:
        std::string _type;
};

#endif
