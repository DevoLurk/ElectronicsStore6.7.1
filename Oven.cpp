#include "Oven.h"

Oven::Oven() = default;

Oven::Oven(int temp, int power)
{
	_temp = temp;
	_power = power;
	price = random(30000, 85000);                    // случайная цена от 30к до 85к
	mnfacturer = manufacturer[random(0, 9)];         // случайный производитель (1 из 10)
}

void Oven::show()
{
	std::cout << "\033[33m    Мульти Духовка  \033[0m" << std::endl;
	std::cout << "MAX температура      " << _temp << std::endl;
	std::cout << "Мощность(Вт)         " << _power << std::endl;
	std::cout << "Обьем в литрах:      " << Stove::size << std::endl;
	std::cout << "Цена:                " << price << std::endl;
	std::cout << "Производитель:       " << mnfacturer << std::endl;
}