#ifndef MOBILEPHONE
#define MOBILEPHONE

#include"IElectronics.h"

// мобильный телефон

class MobilePhone: public IElectronics
{
public:
	MobilePhone();
	MobilePhone(int battaryCapyty, int memory, int simCnt);
	MobilePhone(int battaryCapyty, int memory);
	
	void show() override;
private:
	int _battaryCapyty;           // обьем батареи
    int _memory;                  // обьем памяти (Gb)
	int _simCnt;                  // количество симок
	int price;                    // цена
	std::string mnfacturer;       // производитель
};

#endif // MOBILEPHONE