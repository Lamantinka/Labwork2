#include <iostream>
#include <string>
using namespace std;

class Karatsuba
{
private:
	string a;
	string b;
	string res;
	long long n;
public:
	string l();
	Karatsuba(string _a, string _b);
	void multiply();
	void m_size();
	string sum(string a, string b);
};

