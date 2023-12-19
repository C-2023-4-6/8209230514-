#include <iostream>

using namespace std;

int main()
{
    double num1, num2, result;
    char sign ;//用字符型定义运算符
    cin >> num1 >> sign>> num2;

    switch (sign)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {//考虑不合法情况
            cerr << "错误" << endl;
            return 1;
        }
        result = num1 / num2;
        break;
    case '%':
        if (static_cast<int>(num2) == 0)//取余运算将变量换成整形
        {//考虑不合法情况
            cout<< "错误" << endl;
            return 1;
        }
        
                result = static_cast<int>(num1) % static_cast<int>(num2);
        break;
    default:
        cout << "错误" << endl;
        return 1;
    }

    cout << "=" << result << endl;

    return 0;
}