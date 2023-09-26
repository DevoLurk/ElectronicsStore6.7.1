#include "Microwave.h"

Microwave::Microwave() = default;

Microwave::Microwave(int power) : _power(power) 
{
	size = random(3, 5);                            // ��������� ����� �� 3 �� 5 ������
	price = random(2000, 6000);                     // ��������� ���� �� 2� �� 6�
	mnfacturer = manufacturer[random(0, 9)];        // ��������� ������������� (1 �� 10)
}

void Microwave::show()
{
	std::cout << "\033[33m    ������������� \033[0m" << std::endl;
	std::cout << "��������(��):        " << _power << std::endl;
	std::cout << "����� � ������:      " << size << std::endl;
	std::cout << "����:                " << price << std::endl;
	std::cout << "�������������:       " << mnfacturer << std::endl;
}