#include<iostream>
#include"student.h" //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
 {
    cout << "num:" << num << endl;
    cout << "name:" << name[19] << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value()
{
		num = 0;
		sex = 'b';
		for (int i = 0; i < 20; i++)
		{
			name[i] = 'a';
		}
}
