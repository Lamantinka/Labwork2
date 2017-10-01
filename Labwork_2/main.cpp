#include <iostream>
#include "Karatsuba.h"
using namespace std;

void main() {
	string a = "12244556666666";
	string b = "5";

	//unsigned long long ff = 18446744073709551615;
	//18 446 744 073 709 551 615

	Karatsuba obj(a,b);

	system("pause");
	return;
}