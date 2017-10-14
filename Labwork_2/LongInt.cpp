#include <iostream>
#include "LongInt.h"

using namespace std;


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
	return LongInt(obj.Result);
}

LongInt LongInt::operator=(LongInt a)
{
	val = a.val;
	return LongInt();
}

ostream & operator<<(ostream & os, const LongInt & dt)
{
	cout << dt.val << endl;
	return os;
}


