#include "Stolbik.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;



Stolbik::Stolbik(string _a, string _b)
{
	Karatsuba();
	a = _a;
	b = _b;
	
	n = a.size();

	

	multiply(a, b);
	
}

Stolbik::Stolbik()
{
	
}

void Stolbik::multiply(string a, string b)
{
	cout << "Multiply by stolbik" << endl;
	int k = b.size();
	
	for (int i = 0; i < b.size(); i++) {
		minimul(b[k - 1]);
		k--;
	}
	

	
}

void Stolbik::minimul(char num)
{
	res = "";
	for (int i = 0; i < a.size(); ++i)
		res += "0";

	int z = 0, t = 0;
	int k = n - 1;
	int tt = num - '0';
	

	for (int i = 0; i < a.size(); i++, k--) {
		
	z = (a[k] - '0') * (tt) + t;
	t = 0;
	if (z >= 10) t = (int)z/10;

		res[k] = z%10 + '0';
		
	} //for
	

	if (t != 0) {
		res = to_string(t) + res;
	}
	

	for (int i = 0; i < chet; i++) {
		res += "0";
	}
	Result = sum(res, Result);
	chet++;
}

