#include "Stolbik.h"
#include <iostream>
#include <string>
using namespace std;



Stolbik::Stolbik(string _a, string _b)
{
	Karatsuba();
	a = _a;
	b = _b;
	n = m_size(a, b);
	normalize(a, b, n);

	for (int i = 0; i < n; ++i)
		res.insert(res.end(), "0"); //заполняет вектор нолями, n = длину чисел

	multiply(a, b);
	
}

void Stolbik::multiply(string a, string b)
{
	

	minimul("2");

	
}

void Stolbik::minimul(string num)
{
	cout << n << endl;
	for (int i = 0; i < n; ++i) { //обнуляю вектор
		res[i] = "0";
	}
	int z = 0, t = 0;
	int k = n - 1;
	int tt = num[0] - '0';
	

	for (int i = 0; i < n; i++, k--) {
		
	z = (a[k] - '0') * (tt) + t;
	t = 0;
	if (z >= 10) t = (int)z/10;

		res[k] = z%10 + '0';
	}z = 0;

	if (t != 0) {
		res.insert(res.begin(), to_string(t));
		z = 1;
	}

	for (int i = 0; i < n + z; ++i) 
	cout << "Res = " << res[i] << endl;

}

