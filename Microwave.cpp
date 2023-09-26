#include "Microwave.h"

Microwave::Microwave() = default;

Microwave::Microwave(int power) : _power(power) 
{
	size = random(3, 5);                            // случайный обьем от 3 до 5 литров
	price = random(2000, 6000);                     // случайная цена от 2к до 6к
	mnfacturer = manufacturer[random(0, 9)];        // случайный производитель (1 из 10)
}

void Microwave::show()
{
	std::cout << "\033[33m    Микроволновка \033[0m" << std::endl;
	std::cout << "Мощность(Вт):        " << _power << std::endl;
	std::cout << "Обьем в литрах:      " << size << std::endl;
	std::cout << "Цена:                " << price << std::endl;
	std::cout << "Производитель:       " << mnfacturer << std::endl;
}