#include "Karatsuba.h"
#include<vector>
class Stolbik : public Karatsuba
{
public:
	Stolbik(string a, string b);
	void multiply(string a, string b);
	void minimul(string num); //���������� �� ������� ����� �� ������� b, ��� ��� �������� �� a b � ������������ � res[]
	unsigned long long n;
private:
	string  res;
};

