#include "Karatsuba.h"

class LongInt
{
private:
	string val;
public:
	LongInt();
	LongInt(string _val);
	LongInt operator *(LongInt a);
	LongInt operator = (LongInt a);
	friend 	ostream& operator << (ostream& os, const LongInt& dt);
};

