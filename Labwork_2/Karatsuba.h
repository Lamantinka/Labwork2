#include <iostream>
#include <string>
using namespace std;

class Karatsuba
{
private:
	string a;
	string b;
public:
	string Karatsub;
	Karatsuba(string _a, string _b);
	string multiply(string a, string b);
	int m_size(string a, string b);
	string sum(string a, string b);
	void normalize(string &a, string &b, unsigned long long &n);//выравнивает длины строк
	string minuss(string a, string b);
	
};

