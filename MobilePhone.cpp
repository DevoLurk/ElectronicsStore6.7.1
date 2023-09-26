#include "MobilePhone.h"

MobilePhone::MobilePhone() = default;

MobilePhone::MobilePhone(int battaryCapyty, int memory, int simCnt) : _battaryCapyty(battaryCapyty), _memory(memory), _simCnt(simCnt)
{
	price = random(3000, 90000);                    // ��������� ���� �� 3� �� 90�
	mnfacturer = manufacturer[random(0, 9)];        // ��������� ������������� (1 �� 10)
}

MobilePhone::MobilePhone(int battaryCapyty, int memory) : MobilePhone(battaryCapyty, memory, 1) {}

void MobilePhone::show()
{
	std::cout << "\033[33m    �������  \033[0m" << std::endl;
	std::cout << "����� �������:       " << _battaryCapyty << std::endl;
	std::cout << "����� ������ (Gb):   " << _memory << std::endl;
	std::cout << "���������� ��� ����: " << _simCnt << std::endl;
	std::cout << "����:                " << price << std::endl;
	std::cout << "�������������:       " << mnfacturer << std::endl;
}



