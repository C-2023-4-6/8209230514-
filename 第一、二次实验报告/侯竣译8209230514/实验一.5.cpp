#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b;
	cout << "���뻪���¶�" << endl;
	cin >> a;
	b = (a - 32) / 1.8;
	cout << fixed << setprecision(2) << endl;
	cout << "�����¶�Ϊ" << b << endl;
	return 0;
}