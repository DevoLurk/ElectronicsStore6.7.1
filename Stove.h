#ifndef STOVE
#define STOVE

#include"IElectronics.h"

// простая духовка

class Stove : virtual public IElectronics
{
public:
	Stove();
	Stove(int temp);
	Stove(int temp, bool grill);
	void show() override;

protected:
    int _temp;                  // максимальная температура нагрева
	int size;              // обьем литров

private:
	int price;                  // цена
	bool _grill;                // наличие гриля
	std::string mnfacturer;     // мроизводитель
};

#endif // STOVE