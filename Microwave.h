#ifndef MICROWAVE
#define MICROWAVE

#include"IElectronics.h"

// �������������

class Microwave : virtual public IElectronics
{
public:
	Microwave();
	Microwave(int power);
	void show() override;

protected:
    int _power;                  // �������� ����

private:
	int size;                   // ����� ������
	int price;                  // ����
	std::string mnfacturer;     // �������������
};

#endif // MICROWAVE