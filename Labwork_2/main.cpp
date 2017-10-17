#include "LongInt.h"

void main() { //минусовые числа не вводить!
	setlocale(LC_ALL, "Russian");

	string b = "111111111111111111111111111111111111111111111111111111111111";
	string a = "222222222222222222222222222222222222222222222222222222222222";

	LongInt _a(a);
	LongInt _b(b);
	LongInt _c;
	_a.mul = "2";//1 - Karatsuba, else - stolbik
	_c = _a*_b;
	cout << _c;
	
	
	system("pause");
	return;
}