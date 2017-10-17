#include "Karatsuba.h"
#include<vector>
class Stolbik : public Karatsuba
{
public:
	Stolbik(string a, string b);
	Stolbik();
	void multiply(string a, string b);
	void minimul(char num); //передаются по порядку числа из стринга b, там оно множится на a b и записывается в res[]
	unsigned long long n;
private:
	string  res;
	int chet = 0;
};

