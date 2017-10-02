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
	
	
	multiply(a,b);
	
}




string Karatsuba::multiply(string a, string b)
{
	int n = m_size(a, b);
	normalize(a, b, n);
	cout << "n = " << n << endl;

	unsigned long long  T1, T2, T3;
	string a_l = a.substr(0, n/2), a_r = a.substr(n/2), b_l = b.substr(0, n / 2), b_r = b.substr(n/2);
	string res;
	
	string _T1, _T2, _T3;
	
	cout << "al = " << a_l << endl;
	cout << "ar = " << a_r << endl;
	cout << "bl = " << b_l << endl;
	cout << "br = " << b_r << endl;

	if (a_l.size() > 6 || b_l.size() > 6) {
		_T1 = multiply(a_l, b_l);
		
	}
	else {
		T1 = atoi(a_l.c_str())* atoi(b_l.c_str());
		_T1 = to_string(T1);
	}
	
	if (a_r.size() > 6 || b_r.size() > 6) {
		_T2 = multiply(a_r, b_r);
	
	}
	else {
		T2 = atoi(a_r.c_str())*atoi(b_r.c_str());
		_T2 = to_string(T2);
	}
	if ((a_l + a_r).size() > 12 || (b_l + b_r).size() > 12) {
		_T3 = multiply((sum(a_l, a_r)), (sum(b_l, b_r)));

	}
	else {
		T3 = (atoi(a_l.c_str()) + atoi(a_r.c_str()))  *   (atoi(b_l.c_str()) + atoi(b_r.c_str())) -T1 - T2; //вот тут может вылазить
		_T3 = to_string(T3);
	}
	//дальше пошли стринги полностью, за пределы не вылезет
	
	
	for(int i = 0;i<n;i++)
		_T1 += "0";

	for (int i = 0; i < n / 2; i++)
		_T3 += "0";



	res = sum(_T2, sum(_T3, _T1));
	cout << "_T1 = " << _T1 << endl;
	cout << "_T2 = " << _T2 << endl;
	cout << "_T3 = " << _T3 << endl;
	cout << "RES = " << res << endl;
	return res;
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


	if (flag)result = "1" + result; //magic

	//убрать 0 в начале
	if (result[0] == 0)
		cout << "сделать тут анти-ноль \n";

	
	return result;
}

int Karatsuba::m_size(string a, string b)
{
	int n = 0;
	if (a.size() >= b.size()) n = a.size();
	else n = b.size();
	return n;
}

void Karatsuba::normalize( string &a, string &b, int &n) {
	
	if ((a.size() == b.size()) && a.size() %2 == 0) return;
	string temp;
	if (a.size() < b.size()) {
		for (int i = 0; i < n - a.size(); i++)
			temp += "0";
			a = temp + a;
	}
	if (b.size() < a.size()) {
		for (int i = 0; i < n - b.size(); i++)
			temp += "0";
			b = temp + b;
	}
	if (a.size() %2 != 0) {
		a = "0" + a;
		b = "0" + b;
	}
	n = b.size();
}