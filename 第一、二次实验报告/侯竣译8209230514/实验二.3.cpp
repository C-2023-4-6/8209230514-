#include<iostream>
using namespace std;
int main() {
	int a, b, c;//��������������c
	cout << "��������������";
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		//ȷ���Ƿ�Ϊ������
		cout << "������������";
	}
	else if (a == b || a == c || b == c)
	{
		cout << "Ϊ����������" << endl;
	}
	else {
		cout << "���ǵ���������";
	}
}