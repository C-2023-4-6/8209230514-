#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b;
	cout << "输入华氏温度" << endl;
	cin >> a;
	b = (a - 32) / 1.8;
	cout << fixed << setprecision(2) << endl;
	cout << "摄氏温度为" << b << endl;
	return 0;
}