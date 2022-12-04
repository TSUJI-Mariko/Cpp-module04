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


int main(void)
{
    const Animal* animal[10];
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
	Cat	*tama = new Cat();

	chibi->setIdea("I am Chibi", 0);
	chibi->setIdea("I am hungry", 1);
	tama->setIdea("Why my name is Tama?", 0);
	tama->setIdea("My name is too basic in Japan", 1);
	
	std::cout << chibi->getType() << ": chibi :";
	chibi->makeSound();
	std::cout << chibi->getType() << ": chibi's idea : " << "\033[1m" << chibi->getIdea(0) << "\033[0m" << std::endl;
	std::cout << chibi->getType() << ": chibi's idea : " << "\033[1m" << chibi->getIdea(1) << "\033[0m" << std::endl;
	
	std::cout << tama->getType() << ": tama :";
	tama->makeSound();
	std::cout << tama->getType() << ": tama's idea  : " << "\033[1m" << tama->getIdea(0) << "\033[0m" << std::endl;
	std::cout << tama->getType() << ": tama's idea  : " << "\033[1m" << tama->getIdea(1) << "\033[0m" << std::endl;
	
	std::cout << "\033[32m" << "-----Chibi and Tama change their mind-----" << "\033[0m" << std::endl;
	
	chibi->setIdea("I want to talk with Tama", 0);
	chibi->setIdea("But Tama don't like me", 1);
	tama->setIdea("Why Chibi gaze me?", 0);
	tama->setIdea("I want to sleep", 1);
	
	std::cout << chibi->getType() << ": chibi's idea : " << "\033[1m" << chibi->getIdea(0) << "\033[0m" << std::endl;
	std::cout << chibi->getType()<< ": chibi's idea : " << "\033[1m" << chibi->getIdea(1) << "\033[0m" << std::endl;
	std::cout << tama->getType()<< ": tama's idea  : " << "\033[1m" << tama->getIdea(0) << "\033[0m" << std::endl;
	std::cout << tama->getType()<< ": tama's idea  : " << "\033[1m" << tama->getIdea(1) << "\033[0m" << std::endl;
	
	delete chibi;
	delete tama;
	std::cout << "\033[34m" << "------------------------------" << "\033[0m" << std::endl << std::endl;
	return 0;
}