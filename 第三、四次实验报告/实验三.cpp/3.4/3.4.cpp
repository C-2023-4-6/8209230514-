#include <iostream>
#include "mytriangle.h"
using namespace std;
int main()
{
    double side1, side2, side3;
    cout << "输入三角形的三条边长：" << endl;
    cin >> side1 >> side2 >> side3;

    if (is_valid(side1, side2, side3)==0)
    {
        cout << "错误" << endl;
        return -1;
    }

    double area = double_area(side1, side2, side3);

    cout << "三角形的面积为：" << area << endl;
}