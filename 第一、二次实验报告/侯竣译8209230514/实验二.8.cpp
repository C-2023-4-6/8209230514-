#include <iostream>
using namespace std;

int main()
{
    double a, x, a1;
    cout << "������a��ֵ" << endl;
    cin >> a;
    x = a; a1 = (x + a / x) / 2;
    for (; fabs(a1 - x) > 10e-5; x = a1, a1 = (x + a / x) / 2)
    {}
    cout << "����ƽ����Ϊ" << a1 << endl;
}

