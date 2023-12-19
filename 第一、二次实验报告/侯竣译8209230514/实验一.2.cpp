#include<iostream>
using namespace std;
#define PI 3.141459//定义圆周率
int main() 
{
	float r, h;//定义圆锥的底面半径、高
	cout << "输入圆锥的底的半径" << endl;
	cin >> r;
	cout << "输入圆锥的高" << endl;
	cin >> h;//获取圆锥底面半径和高
	float v;//定义圆锥的体积
	v= (PI* h * r * r )/ 3;//计算得到体积
	cout << "圆锥的体积是" << endl;
	cout << v << endl;
	return 0;
}
