#include "Karatsuba.h"

class LongInt
{
private:
	string val;
public:
	LongInt();
	LongInt(string _val);
	LongInt operator *(LongInt a);
	~LongInt();
};

