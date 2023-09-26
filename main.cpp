#include<iostream>
#include"IElectronics.h"
#include"Microwave.h"
#include"MobilePhone.h"
#include"Oven.h"
#include"Stove.h"
#include"random.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

    int storehouseSize = 5;

	printf("\t ����� ���������� �� ����� \n\n");
	printf(" ��� ������ ������ ��� ����� ��������� ����� �� 5 ����� \n");
	printf("  \n");

	IElectronics** storehouse = new IElectronics*[storehouseSize];

	storehouse[0] = new MobilePhone(4200, 15);
	storehouse[1] = new Microwave(600);
	storehouse[2] = new MobilePhone(3200, 105, 2);
	storehouse[3] = new Stove(300);
	storehouse[4] = new Oven(260, 1000);

	for (int i = 0; i < storehouseSize; i++)
	{
		storehouse[i]->show();
		cout << endl;
	}

	for (int i = 0; i < storehouseSize; i++)
		delete storehouse[i];

	delete[] storehouse;

	printf("\t ���� ������ ����������, �� ������� ����� ������ \n\n");

	system("PAUSE");
	system("CLS");

	printf("\t � ������ �������� ���� ����� \n\n");
	printf("������� ����� �� ������ ������ ������ : ");
	cin >> storehouseSize;

	IElectronics** yrStorehouse = new IElectronics * [storehouseSize];

	for (int i = 0; i < storehouseSize; i++)
	{
		char ch;

		printf("\n������ � %d ������\n", i+1);
		printf("�������� ��� ��������: 1 - ������� 2 - ���� 3 - ������������� 4 - ����� ������� : ");
		cin >> ch;

		switch (ch)
		{
		case '1':
			yrStorehouse[i] = new MobilePhone(random(900, 6000), random(8, 512));
			break;
		case '2':
			yrStorehouse[i] = new Stove(random(180, 400));
			break;
		case '3':
			yrStorehouse[i] = new Microwave(random(450, 1200));
			break;
		case '4':
			yrStorehouse[i] = new Oven(random(180, 400), random(450, 1200));
			break;
		default:
			if (random(1, 4) >= 3)
			{
				printf("�� ������ �� �������, � ������ ��� ������� � ����� �������\n");
				yrStorehouse[i] = new MobilePhone(random(900, 6000), random(8, 512), 3);
			}
			else
			{
				printf("�� ������ �� �������, � ������ ��� ���������� ������� � ������\n");
				yrStorehouse[i] = new Stove(random(180, 400), true);
			}
			break;
		}
	}

	printf("\n\n� ������ � ������ ��� ��� �����");
	printf("\n������� ����� ������ � ���������� ������������� �� ������ �����\n\n");

	system("PAUSE");
	system("CLS");

	for (int i = 0; i < storehouseSize; i++)
	{
		yrStorehouse[i]->show();
		cout << endl;
    }	

	for (int i = 0; i < storehouseSize; i++)
		delete yrStorehouse[i];

	delete[] yrStorehouse;

	return 0;
}