#include <iostream>
#include "mytriangle.h"
using namespace std;
int main()
{
    double side1, side2, side3;
    cout << "���������ε������߳���" << endl;
    cin >> side1 >> side2 >> side3;

    if (is_valid(side1, side2, side3)==0)
    {
        cout << "����" << endl;
        return -1;
    }

    double area = double_area(side1, side2, side3);

    cout << "�����ε����Ϊ��" << area << endl;
}