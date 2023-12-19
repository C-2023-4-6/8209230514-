#include <iostream>
using namespace std;

int main()
{
    double a, x, a1;
    cout << "请输入a的值" << endl;
    cin >> a;
    x = a; a1 = (x + a / x) / 2;
    for (; fabs(a1 - x) > 10e-5; x = a1, a1 = (x + a / x) / 2)
    {}
    cout << "所求平方根为" << a1 << endl;
}

