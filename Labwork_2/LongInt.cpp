#include "LongInt.h"



LongInt::LongInt()
{
}

LongInt::LongInt(string _val)
{
	val = _val;
}

LongInt LongInt::operator*(LongInt a)
{
	Karatsuba obj(val, a.val);
	cout << obj.Karatsub << endl;
	return obj.Karatsub;
}


LongInt::~LongInt()
{
}
