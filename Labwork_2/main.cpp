#include "LongInt.h"

void main() { //минусовые числа не вводить!
	setlocale(LC_ALL, "Russian");
/*
	string b = "111111111111111111111111111111111111111111111111111111111111";
	string a = "222222222222222222222222222222222222222222222222222222222222";

	LongInt _a(a);
	LongInt _b(b);
	LongInt _c;
	_c = _a*_b;
	cout << _c;*/
	string a = "9125";
	string b = "2125";
	Stolbik(a, b);
	
	system("pause");
	return;
}