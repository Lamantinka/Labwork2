#include <iostream>
#include <string>
using namespace std;

class Karatsuba
{
protected:
	string a;
	string b;
public:
	Karatsuba() {};
	string Result;
	Karatsuba(string _a, string _b);
	string multiply(string a, string b);
	int m_size(string a, string b);
	string sum(string a, string b);
	void normalize(string &a, string &b, unsigned long long &n);//����������� ����� �����
	string minuss(string a, string b);
	
};

