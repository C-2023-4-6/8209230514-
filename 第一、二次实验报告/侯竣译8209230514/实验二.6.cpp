#include<iostream>
using namespace std;
int main() 
{
	int a, b;
	cout << "����������������";
	cin >> a  >> b;
	if (a > b)//�ж�������˭��
	{
		for (int c = a;; c++)//��a�����ϵ���
			if (c % a == 0 && c % b == 0)//��С��������������
			{
				cout << "��С������=" << c << endl;
				break;
			}
		for(int d=a;;d--)
			if (a % d == 0 && b %d==0)//���Լ����������
			{
				cout << "���Լ��=" << d << endl;
				break;

			}
	}
	//ͬ������a<b���
	else if (a < b)
	{
		for (int e = b;; e++)
			if (e% a == 0 && e % b == 0)
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
	else//a=b
	{
		cout << "��С������=" << a<< endl;
		cout << "��С������=" << a << endl;
	}
}