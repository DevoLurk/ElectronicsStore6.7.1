#include "stove.h"

Stove::Stove() = default;

Stove::Stove(int temp) : Stove(temp, false) {}

Stove::Stove(int temp, bool grill) : _temp(temp), _grill(grill)
{
	stoveSize = random(5, 25);                            // ��������� ����� �� 5 �� 25 ������
	price = random(10000, 45000);                    // ��������� ���� �� 10� �� 45�
	mnfacturer = manufacturer[random(0, 9)];         // ��������� ������������� (1 �� 10)
}


void Stove::show()
{
	std::cout << "\033[33m    �������  \033[0m" << std::endl;
	std::cout << "MAX �����������      " << _temp << std::endl;
	std::cout << "����� � ������:      " << stoveSize << std::endl;
	if(_grill)
		std::cout << "���� �����" << std::endl;
	else
		std::cout << "��� �����" << std::endl;
	std::cout << "����:                " << price << std::endl;
	std::cout << "�������������:       " << mnfacturer << std::endl;
}