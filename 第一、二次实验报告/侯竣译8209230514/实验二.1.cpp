#include<iostream>
using namespace std;
int main() {
    char ch;//�����ַ�
    cout << "������һ���ַ�: ";
    cin >> ch;//���ַ���ֵ

    if (ch >= 'a' && ch <= 'z') {
        
        ch = ch - 'a' + 'A';// ͨ��asc��Ӽ���Сд��ĸת��Ϊ��д��ĸ
        cout << "ת������ַ�Ϊ: " << ch << endl;
    }
    else {
        // �������ַ��� ASCII ֵ
        cout << "��һ���ַ��� ASCII ֵΪ: " << static_cast<int>(ch) + 1 << endl;
    }

    return 0;
}