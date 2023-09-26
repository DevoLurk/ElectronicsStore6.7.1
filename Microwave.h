#ifndef MICROWAVE
#define MICROWAVE

#include"IElectronics.h"

// микроволновка

class Microwave : virtual public IElectronics
{
public:
	Microwave();
	Microwave(int power);
	void show() override;

protected:
    int _power;                  // мощность ватт

private:
	int size;                   // обьем литров
	int price;                  // цена
	std::string mnfacturer;     // производитель
};

#endif // MICROWAVE