#include<iostream>
using namespace std;
#define PI 3.141459//����Բ����
int main() 
{
	float r, h;//����Բ׶�ĵ���뾶����
	cout << "����Բ׶�ĵ׵İ뾶" << endl;
	cin >> r;
	cout << "����Բ׶�ĸ�" << endl;
	cin >> h;//��ȡԲ׶����뾶�͸�
	float v;//����Բ׶�����
	v= (PI* h * r * r )/ 3;//����õ����
	cout << "Բ׶�������" << endl;
	cout << v << endl;
	return 0;
}
