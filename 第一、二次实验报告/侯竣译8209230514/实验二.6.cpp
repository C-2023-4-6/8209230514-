#include<iostream>
using namespace std;
int main() 
{
	int a, b;
	cout << "请输入两个正整数";
	cin >> a  >> b;
	if (a > b)//判断两个数谁大
	{
		for (int c = a;; c++)//在a基础上递增
			if (c % a == 0 && c % b == 0)//最小公倍数满足条件
			{
				cout << "最小公倍数=" << c << endl;
				break;
			}
		for(int d=a;;d--)
			if (a % d == 0 && b %d==0)//最大公约数满足条件
			{
				cout << "最大公约数=" << d << endl;
				break;

			}
	}
	//同理讨论a<b情况
	else if (a < b)
	{
		for (int e = b;; e++)
			if (e% a == 0 && e % b == 0)
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
	else//a=b
	{
		cout << "最小公倍数=" << a<< endl;
		cout << "最小公倍数=" << a << endl;
	}
}