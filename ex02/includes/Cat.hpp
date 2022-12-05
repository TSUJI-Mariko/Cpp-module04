/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:56:29 by mtsuji            #+#    #+#             */
/*   Updated: 2022/12/01 17:56:32 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public AAnimal
{
    public:
        Cat(void);
        Cat(const Cat &Cat);
        virtual ~Cat(void);
    
        Cat &operator =(Cat const &rhs);
        void makeSound(void) const;
    
        std::string const & getIdea(int const i) const;
        void    setIdea(std::string idea, const int i);
    
    private:
        Brain   *_brain;
};

#endif

