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
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

void    my_test(void)
{
    std::cout << "\n\n-------WRONG ANIMAL TEST-------" << std::endl;
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongCat();
	const WrongCat* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound(); //will output Animal sound!
	i->makeSound(); //will output Cat sound!
	delete meta;
	delete j;
	delete i;
    std::cout << "------------TEST02-------------" << std::endl;
	const Animal * A = new Animal("Bird");
	std::cout << A->getType() << std::endl;;
	A->makeSound();
	const Cat * B = new Cat();
	std::cout << B->getType() << std::endl;;
	B->makeSound();
	const Animal * C = new Cat(*B);
	C->makeSound();
	delete A;
	delete B;
	delete C;
    std::cout << "------------------------------" << std::endl;
}

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the WrongCat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    my_test();
    return 0;
}
