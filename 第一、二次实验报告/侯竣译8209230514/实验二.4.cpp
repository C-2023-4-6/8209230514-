#include <iostream>

using namespace std;

int main()
{
    double num1, num2, result;
    char sign ;//���ַ��Ͷ��������
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
        {//���ǲ��Ϸ����
            cerr << "����" << endl;
            return 1;
        }
        result = num1 / num2;
        break;
    case '%':
        if (static_cast<int>(num2) == 0)//ȡ�����㽫������������
        {//���ǲ��Ϸ����
            cout<< "����" << endl;
            return 1;
        }
        
                result = static_cast<int>(num1) % static_cast<int>(num2);
        break;
    default:
        cout << "����" << endl;
        return 1;
    }

    cout << "=" << result << endl;

    return 0;
}