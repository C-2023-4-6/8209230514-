#include <iostream>
using namespace std;
#include<string>
int main() {
    string input;
    cout << "������һ���ַ���";
    getline(cin, input);
    int letter = 0;
    int space = 0;
    int number = 0;
    int other = 0;

    for (char c : input)
    {
        if (isalpha(c))
        { // �ж��Ƿ�Ϊ��ĸ
            letter++;
        }
        else if (isspace(c)) 
        { // �ж��Ƿ�Ϊ�ո�
            space++;
        }
        else if (isdigit(c)) 
        { // �ж��Ƿ�Ϊ�����ַ�
            number++;
        }
        else 
        { // �����ַ�
            other++;
        }
    }

    cout << "Ӣ����ĸ������" << letter << endl;
    cout << "�ո������" << space << endl;
    cout << "�����ַ�������" << number << endl;
    cout << "�����ַ�������" << other << endl;

    return 0;
}