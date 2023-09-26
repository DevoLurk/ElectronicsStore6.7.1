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

	printf("\t Добро пожаловать на склад \n\n");
	printf(" Для начала покажу как может выглядеть склад на 5 ячеек \n");
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

	printf("\t Если готовы продолжать, то нажмите любую кнопку \n\n");

	system("PAUSE");
	system("CLS");

	printf("\t А теперь создадим свой склад \n\n");
	printf("Сколько ячеек на складе хотите видеть : ");
	cin >> storehouseSize;

	IElectronics** yrStorehouse = new IElectronics * [storehouseSize];

	for (int i = 0; i < storehouseSize; i++)
	{
		char ch;

		printf("\nКладем в %d ячейку\n", i+1);
		printf("Выберите что положить: 1 - телефон 2 - печь 3 - микроволновка 4 - умная духовка : ");
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
				printf("Вы ничего не выбрали, я положу вам телофон с ТРЕМЯ симками\n");
				yrStorehouse[i] = new MobilePhone(random(900, 6000), random(8, 512), 3);
			}
			else
			{
				printf("Вы ничего не выбрали, я положу вам уникальную духовку с грилем\n");
				yrStorehouse[i] = new Stove(random(180, 400), true);
			}
			break;
		}
	}

	printf("\n\nА теперь я покажу вам наш склад");
	printf("\nнажмите любую кнопку и асортимент распичатается на чистом листе\n\n");

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