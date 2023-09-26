#ifndef STOVE
#define STOVE

#include"IElectronics.h"

// ������� �������

class Stove : virtual public IElectronics
{
public:
	Stove();
	Stove(int temp);
	Stove(int temp, bool grill);
	void show() override;

protected:
    int _temp;                  // ������������ ����������� �������
	int stoveSize;                   // ����� ������

private:
	int price;                  // ����
	bool _grill;                 // ������� �����
	std::string mnfacturer;     // �������������
};

#endif // STOVE