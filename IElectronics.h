#ifndef IELECTRONICS
#define IELECTRONICS

#include"random.h"

class IElectronics
{
public:
	virtual void show() = 0;
	virtual ~IElectronics() = default;
};

#endif // IELECTRONICS