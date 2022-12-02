/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:47:37 by mtsuji            #+#    #+#             */
/*   Updated: 2022/12/01 17:47:39 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

void    my_test(void)
{
    std::cout << "\n\n-------WRONG ANIMAL TEST-------" << std::endl;

    std::cout << "------------TEST02-------------" << std::endl;
	
    std::cout << "------------------------------" << std::endl;
}

int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	delete j; //should not create a leak
	delete i;
    return 0;
}
