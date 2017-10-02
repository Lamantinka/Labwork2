#include <iostream>
#include "Karatsuba.h"
using namespace std;

void main() {
	string a = "11111111111111111111";
	string b = "22222222222222222222";

	//unsigned long long ff = 18446744073709551615;
	//18 446 744 073 709 551 615

	Karatsuba obj(a,b);

	system("pause");
	return;
}