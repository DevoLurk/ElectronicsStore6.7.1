#ifndef OVEN
#define OVEN

#include"Microwave.h"
#include"Stove.h"

// духовка с фукцией микроволновки

class Oven final : public Microwave, Stove
{
public:
	Oven();
	Oven(int temp, int power);
    void show() override;

private:
	int price;                  // цена
	std::string mnfacturer;     // мроизводитель
};

#endif // OVEN

