#include <iostream>
#include "Karatsuba.h"
using namespace std;

void main() { //минусовые числа не вводить!
	setlocale(LC_ALL, "Russian");

	string a = "11111111111111111111";
	string b = "22222222222222222222";


	Karatsuba obj(a,b);
	cout << obj.Karatsub << endl;

	system("pause");
	return;
}