#include "Karatsuba.h"
#include<vector>
class Stolbik : public Karatsuba
{
public:
	Stolbik(string a, string b);
	Stolbik();
	void multiply(string a, string b);
	void minimul(char num); //���������� �� ������� ����� �� ������� b, ��� ��� �������� �� a b � ������������ � res[]
	unsigned long long n;
private:
	string  res;
	int chet = 0;
};

