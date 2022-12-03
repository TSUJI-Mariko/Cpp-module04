/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuji <mtsuji@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:08:12 by msuji             #+#    #+#             */
/*   Updated: 2022/12/02 17:08:13 by msuji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain
{
    public:
        Brain(void);
        Brain(const Brain &brain);
        Brain(std::string const &type);
        virtual ~Brain(void);
        Brain &operator =(Brain const &brain);

        std::string    const &getIdea(void) const;

    protected:
        std::string _ideas[100];
};

#endif