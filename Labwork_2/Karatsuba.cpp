#include "Karatsuba.h"
#include <algorithm> //max min
#include <cstdlib>



Karatsuba::Karatsuba(string _a, string _b)
{
	a = _a;
	b = _b;
	
	
	multiply(a,b);
	
}




string Karatsuba::multiply(string a, string b)
{
	unsigned long long n = m_size(a, b), T1, T2, T3;
	normalize(a, b, n);

	string a_l = a.substr(0, n/2), a_r = a.substr(n/2), b_l = b.substr(0, n / 2), b_r = b.substr(n/2),res, _T1, _T2, _T3;

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
		_T3 = minuss(minuss(_T3, _T1), _T2);

	}
	else {
		T3 = (atoi(a_l.c_str()) + atoi(a_r.c_str()))  *   (atoi(b_l.c_str()) + atoi(b_r.c_str())) - T1 - T2; 
		_T3 = to_string(T3);
	}
	
	for(int i = 0;i<n;i++)
		_T1 += "0";
	for (int i = 0; i < n / 2; i++)
		_T3 += "0";

	res = sum(_T2, sum(_T3, _T1));

	Karatsub = res;
	
	return res;
}


//не забыть оптимизировать кол-во строк метода
string Karatsuba::sum(string a, string b){
	string result, nuliki;
	
	int k; int _k = k = max(a.size(), b.size());

	for (int i = 0; i < k; i++)
		result += "0"; //init

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
	
	int t = 0, z =0;
	bool flag = false;

	for (int i = 0; i < _k; i++) {
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
	unsigned long long n = 0;
	if (a.size() >= b.size()) n = a.size();
	else n = b.size();
	return n;
}

void Karatsuba::normalize( string &a, string &b, unsigned long long &n) {
	
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

string Karatsuba::minuss(string a, string b)
{
	if (a.size() == b.size() && a[0] < b[0]) {
		cout << "Читай документация на функцию!\n" << endl;
		return string();
	}

	string res, nuliki;
	int k; int _k = k = max(a.size(), b.size());

	for (int i = 0; i < k; i++)
		res += "0";

	long long ttt = a.size() - b.size();
	long long raz = abs(ttt);

	for (int i = 0; i < raz; i++)
		nuliki += "0";

	if (a.size() < b.size()) 
		a = nuliki + a;

	if (b.size() < a.size())
		b = nuliki + b;
	if (a < b) {
		string z;
		a = z;
		a = b;
		b = z;
	}
	
	int z = 0;
	for (int i = 0; i < _k; i++) {
		if (a[k - 1] < b[k - 1]) {
			a[k - 1] += 10;
			a[k - 2] -= 1;
		}
		z = a[k - 1] - '0' - (b[k - 1] - '0');

		res[k - 1] = z + '0';
		k--;
	}

	return res;
}
