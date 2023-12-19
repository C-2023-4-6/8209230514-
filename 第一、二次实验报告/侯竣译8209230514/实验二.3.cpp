#include<iostream>
using namespace std;
int main() {
	int a, b, c;//定义三角形三边c
	cout << "输入三角形三边";
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		//确定是否为三角形
		cout << "不构成三角形";
	}
	else if (a == b || a == c || b == c)
	{
		cout << "为等腰三角形" << endl;
	}
	else {
		cout << "不是等腰三角形";
	}
}