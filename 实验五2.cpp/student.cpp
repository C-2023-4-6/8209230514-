#include<iostream>
#include"student.h" //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
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
