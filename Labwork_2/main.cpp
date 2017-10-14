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
	string a = "131";
	string b = "32132";
	cout << "a = "  << a << endl;
	Stolbik(a, b);
	
	system("pause");
	return;
}