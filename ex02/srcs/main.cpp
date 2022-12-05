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

#include "../includes/AAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"


void    my_test(void)
{
    std::cout << "\n-------WRONG ANIMAL TEST-------" << std::endl;
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongCat();
	const WrongCat* i = new WrongCat();
	std::cout << "type meta:" << meta->getType() << " " << std::endl;
	std::cout << "type j:" << j->getType() << " " << std::endl;
	std::cout << "type i:" << i->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound(); //will output Animal sound!
	i->makeSound(); //will output Cat sound!
	delete meta;
	delete j;
	delete i;
    std::cout << "------------TEST02-------------" << std::endl;
	const WrongAnimal * A = new WrongAnimal("Bird");
	std::cout << "type :" << A->getType() << std::endl;;
	A->makeSound();
	const Cat * B = new Cat();
	std::cout << "type :" << B->getType() << std::endl;;
	B->makeSound();
	const AAnimal * C = B;
	C->makeSound();
	delete A;
	delete B;
    std::cout << "------------------------------" << std::endl;
}

void    my_test_2(void)
{
    std::cout << "\n------------TEST03-------------" << std::endl;
   
    const AAnimal* animal[10];
    int i;
    std::cout << "\033[34m" << "---------CREATION TEST--------" << "\033[0m" << std::endl;
	i = -1;
	while (++i < 10)
	{
		std::cout << "animal [ " << i + 1 << " ]" << std::endl;
		if (i % 2 == 0)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}
	i = -1;
    std::cout << "\033[34m" << "\n-------DESTRUCTION TEST-------" << "\033[0m" << std::endl;	
	while (++i < 10)
	{
		std::cout << "animal [ " << i + 1 << " ]" << std::endl;
		delete animal[i];
	}
	std::cout << "\033[34m" << "\n---------OTHER TEST-----------" << "\033[0m" << std::endl;

	Dog	*chibi = new Dog();
	Cat	*tama = new Cat;
	Cat *kitty = new Cat(*tama);

	chibi->setIdea("I am Chibi", 0);
	chibi->setIdea("I am hungry", 1);
	tama->setIdea("Why my name is Tama?", 0);
	tama->setIdea("My name is too basic in Japan", 1);
	kitty->setIdea("Hello kitty", 0);
	kitty->setIdea("I'm most famous Japanese cat", 1);
	std::cout << chibi->getType() << ": chibi :";
	chibi->makeSound();
	std::cout << chibi->getType() << ": chibi's idea : " << "\033[1m" << chibi->getIdea(0) << "\033[0m" << std::endl;
	std::cout << chibi->getType() << ": chibi's idea : " << "\033[1m" << chibi->getIdea(1) << "\033[0m" << std::endl;
	
	std::cout << tama->getType() << ": tama :";
	tama->makeSound();
	std::cout << tama->getType() << ": tama's idea  : " << "\033[1m" << tama->getIdea(0) << "\033[0m" << std::endl;
	std::cout << tama->getType() << ": tama's idea  : " << "\033[1m" << tama->getIdea(1) << "\033[0m" << std::endl;
	
	std::cout << kitty->getType() << ": kitty :";
	kitty->makeSound();
	std::cout << kitty->getType() << ": kitty's idea : " << "\033[1m" << kitty->getIdea(0) << "\033[0m" << std::endl;
	std::cout << kitty->getType() << ": kitty's idea : " << "\033[1m" << kitty->getIdea(1) << "\033[0m" << std::endl;

	std::cout << "\033[32m" << "-----Chibi and Tama change their mind-----" << "\033[0m" << std::endl;
	
	chibi->setIdea("I want to talk with Tama", 0);
	chibi->setIdea("But Tama don't like me", 1);
	tama->setIdea("Why Chibi gaze me?", 0);
	tama->setIdea("I hate Hello kitty", 1);
	
	std::cout << chibi->getType() << ": chibi's idea : " << "\033[1m" << chibi->getIdea(0) << "\033[0m" << std::endl;
	std::cout << chibi->getType()<< ": chibi's idea : " << "\033[1m" << chibi->getIdea(1) << "\033[0m" << std::endl;
	std::cout << tama->getType()<< ": tama's idea  : " << "\033[1m" << tama->getIdea(0) << "\033[0m" << std::endl;
	std::cout << tama->getType()<< ": tama's idea  : " << "\033[1m" << tama->getIdea(1) << "\033[0m" << std::endl;
	
	delete chibi;
	delete tama;
	delete kitty;
	std::cout << "\033[34m" << "------------------------------" << "\033[0m" << std::endl << std::endl;
    std::cout << "------------------------------" << std::endl;
}

int main(void)
{
    std::cout << "---------SUBJECT TEST---------" << std::endl;
    //const AAnimal* meta = new AAnimal(); ->can't make instance
    const   WrongAnimal* wanimal = new WrongAnimal();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    std::cout << wanimal->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    wanimal->makeSound();
    delete wanimal;
    delete j;
    delete i;
    std::cout << "------------------------------" << std::endl<< std::endl;
    my_test();
    my_test_2();
    return 0;
}