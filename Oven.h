#ifndef OVEN
#define OVEN

#include"Microwave.h"
#include"Stove.h"

// ������� � ������� �������������

class Oven final : public Microwave, Stove
{
public:
	Oven();
	Oven(int temp, int power);
    void show() override;

private:
	int price;                  // ����
	std::string mnfacturer;     // �������������
};

#endif // OVEN

