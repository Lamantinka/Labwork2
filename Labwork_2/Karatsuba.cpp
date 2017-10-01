#include "Karatsuba.h"
#include <algorithm> //max min
#include <cstdlib>


string Karatsuba::l()
{

	return string();
}

Karatsuba::Karatsuba(string _a, string _b)
{
	a = _a;
	b = _b;
	m_size();
	multiply();
	
}




void Karatsuba::multiply()
{
	long long T1, T2, T3;
	string a_l = a.substr(0, n/2), a_r = a.substr(n/2), b_l = b.substr(0, n / 2), b_r = b.substr(n/2);
	cout << " n = " << n << endl;
	cout << "al = " << a_l << endl;
	cout << "ar = " << a_r << endl;
	cout << "bl = " << b_l << endl;
	cout << "br = " << b_r << endl;
	T1 = atoi(a_l.c_str())* atoi(b_l.c_str());
	T2 = atoi(a_r.c_str())*atoi(b_r.c_str());
	T3 = (atoi(a_l.c_str()) + atoi(a_r.c_str()))  *   (atoi(b_l.c_str()) + atoi(b_r.c_str())) - T1 - T2;//вот тут может вылазить
	string _T1 = to_string(T1), _T2 = to_string(T2), _T3 = to_string(T3);
	
	for(int i = 0;i<n;i++)
		_T1 += "0";

	for (int i = 0; i < n / 2; i++)
		_T3 += "0";



	res = sum(_T2, sum(_T3, _T1));
	cout << "_T1 = " << _T1 << endl;
	cout << "_T2 = " << _T2 << endl;
	cout << "_T3 = " << _T3 << endl;
	cout << "RES = " << res << endl;
	
}

void Karatsuba::m_size()
{
	if (a.size() >= b.size()) n = a.size();
	else n = b.size();
	
}

string Karatsuba::sum(string a, string b)
{
	
	string result;
	
	int k = max(a.size(), b.size());
	int _k = k;

	for (int i = 0; i < k; i++)
		result += "0"; //init

	string nuliki;
	int ttt = a.size() - b.size();
	int raz = abs(ttt);

	for (int i = 0; i < raz; i++)
		nuliki += "0";

	if (a.size() < b.size()) {


		a = nuliki + a;

	}
	if (b.size() < a.size()) {


		b = nuliki + b;


	}
	double t = 0;
	unsigned long long z = 0;
	bool flag = false;//test
	for (int i = 0; i < _k; i++) {

		if (k == 0) system("pause");
		z = a[k - 1] - '0' + b[k - 1] - '0' + t;
		t = 0;
		if (z >= 10) {

			t = z;
			t = (int)t / 10; //прибавляется к след число, излишество
			z = z % 10;

		}
		if (i == (_k - 1) && t >= 1) {
			flag = true;
		}
		result[k - 1] = z + '0';

		k--;
	}


	if (flag)result = "1" + result;



	
	return result;
}
