#include "stove.h"

Stove::Stove() = default;

Stove::Stove(int temp) : Stove(temp, false) {}

Stove::Stove(int temp, bool grill) : _temp(temp), _grill(grill)
{
	stoveSize = random(5, 25);                            // случайный обьем от 5 до 25 литров
	price = random(10000, 45000);                    // случайная цена от 10к до 45к
	mnfacturer = manufacturer[random(0, 9)];         // случайный производитель (1 из 10)
}


void Stove::show()
{
	std::cout << "\033[33m    Духовка  \033[0m" << std::endl;
	std::cout << "MAX температура      " << _temp << std::endl;
	std::cout << "Обьем в литрах:      " << stoveSize << std::endl;
	if(_grill)
		std::cout << "Есть гриль" << std::endl;
	else
		std::cout << "Нет гриля" << std::endl;
	std::cout << "Цена:                " << price << std::endl;
	std::cout << "Производитель:       " << mnfacturer << std::endl;
}