#include <iostream>
#include "LongInt.h"
using namespace std;

void main() { //минусовые числа не вводить!
	setlocale(LC_ALL, "Russian");

	string b = "111111111111111111111111111111111111111111111111111111111111";
	string a = "222222222222222222222222222222222222222222222222222222222222";

	LongInt _a(a);
	LongInt _b(b);
	_a*_b;
	/*
	LongInt a("1212131131"),b("3213123123123"),c;
	c = a*b;
	cout<<c;
	*/

	Karatsuba obj(a,b);
	cout <<endl<< obj.Karatsub << endl;
	//cout << "ll = " << obj.zalupa << endl;  //не забыть убрать
	system("pause");
	return;
}