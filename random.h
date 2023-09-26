#ifndef RANDOM
#define RANDOM

#include<random>
#include<iostream>
#include<string>


static std::string manufacturer[10] = { "Realme", "Asus", "Lenovo", "Huawei", "Samsung", "Apple", "Sony", "Yota", "Xiaomi", "Siemens" };

static int random(int min, int max)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(min, max);

	return dist(gen);
}





#endif // RANDOM
