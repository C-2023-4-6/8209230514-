#include<iostream>
using namespace std;
int fun(int a, int b)
{
	if (a > b)
	{
		for (int c = a;; c++)
			if (c % a == 0 && c % b == 0)
			{
				cout << "��С������=" << c << endl;
				break;
			}
		for (int d = a;; d--)
			if (a % d == 0 && b % d == 0)
			{
				cout << "���Լ��=" << d << endl;
				break;

			}
	}
	else if (a < b)
	{
		for (int e = b;; e++)
			if (e % a == 0 && e % b == 0)
			{
				cout << "��С������=" << e << endl;
				break;
			}
		for (int f = b;; f--)
			if (a % f == 0 && b % f == 0)
			{
				cout << "���Լ��=" << f << endl;
				break;
			}
	}
	else
	{
		cout << "��С������=" << a << endl;
		cout << "��С������=" << a << endl;
	}
	return 0;
}
int main() {
	int a1, a2;
	cout << "����������Ȼ��";
	cin >> a1 >> a2;
	fun(a1, a2);
	return 0;
}