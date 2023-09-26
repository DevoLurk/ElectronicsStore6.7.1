#include "Oven.h"

Oven::Oven() = default;

Oven::Oven(int temp, int power)
{
	_temp = temp;
	_power = power;
	price = random(30000, 85000);                    // ��������� ���� �� 30� �� 85�
	mnfacturer = manufacturer[random(0, 9)];         // ��������� ������������� (1 �� 10)
}

void Oven::show()
{
	std::cout << "\033[33m    ������ �������  \033[0m" << std::endl;
	std::cout << "MAX �����������      " << _temp << std::endl;
	std::cout << "��������(��)         " << _power << std::endl;
	std::cout << "����� � ������:      " << stoveSize << std::endl;
	std::cout << "����:                " << price << std::endl;
	std::cout << "�������������:       " << mnfacturer << std::endl;
}