#ifndef MOBILEPHONE
#define MOBILEPHONE

#include"IElectronics.h"

// ��������� �������

class MobilePhone: public IElectronics
{
public:
	MobilePhone();
	MobilePhone(int battaryCapyty, int memory, int simCnt);
	MobilePhone(int battaryCapyty, int memory);
	
	void show() override;
private:
	int _battaryCapyty;           // ����� �������
    int _memory;                  // ����� ������ (Gb)
	int _simCnt;                  // ���������� �����
	int price;                    // ����
	std::string mnfacturer;       // �������������
};

#endif // MOBILEPHONE

