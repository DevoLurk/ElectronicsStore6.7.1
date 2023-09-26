#include "MobilePhone.h"

MobilePhone::MobilePhone() = default;

MobilePhone::MobilePhone(int battaryCapyty, int memory, int simCnt) : _battaryCapyty(battaryCapyty), _memory(memory), _simCnt(simCnt)
{
	price = random(3000, 90000);                    // случайная цена от 3к до 90к
	mnfacturer = manufacturer[random(0, 9)];        // случайный производитель (1 из 10)
}

MobilePhone::MobilePhone(int battaryCapyty, int memory) : MobilePhone(battaryCapyty, memory, 1) {}

void MobilePhone::show()
{
	std::cout << "\033[33m    Телефон  \033[0m" << std::endl;
	std::cout << "Обьем батареи:       " << _battaryCapyty << std::endl;
	std::cout << "Обьем памяти (Gb):   " << _memory << std::endl;
	std::cout << "Количество сим карт: " << _simCnt << std::endl;
	std::cout << "Цена:                " << price << std::endl;
	std::cout << "Производитель:       " << mnfacturer << std::endl;
}