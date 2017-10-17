#include "Stolbik.h"

class LongInt
{
private:
	string val;
public:
	string mul;
	LongInt();
	LongInt(string _val);
	LongInt operator *(LongInt a);
	LongInt operator = (LongInt a);
	friend 	ostream& operator << (ostream& os, const LongInt& dt);
};

