#include<iostream>
using namespace std;
int fun(int a, int b)
{
	if (a > b)
	{
		for (int c = a;; c++)
			if (c % a == 0 && c % b == 0)
			{
				cout << "最小公倍数=" << c << endl;
				break;
			}
		for (int d = a;; d--)
			if (a % d == 0 && b % d == 0)
			{
				cout << "最大公约数=" << d << endl;
				break;

			}
	}
	else if (a < b)
	{
		for (int e = b;; e++)
			if (e % a == 0 && e % b == 0)
			{
				cout << "最小公倍数=" << e << endl;
				break;
			}
		for (int f = b;; f--)
			if (a % f == 0 && b % f == 0)
			{
				cout << "最大公约数=" << f << endl;
				break;
			}
	}
	else
	{
		cout << "最小公倍数=" << a << endl;
		cout << "最小公倍数=" << a << endl;
	}
	return 0;
}
int main() {
	int a1, a2;
	cout << "输入两个自然数";
	cin >> a1 >> a2;
	fun(a1, a2);
	return 0;
}