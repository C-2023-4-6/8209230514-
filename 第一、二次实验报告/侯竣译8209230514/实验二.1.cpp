#include<iostream>
using namespace std;
int main() {
    char ch;//定义字符
    cout << "请输入一个字符: ";
    cin >> ch;//给字符赋值

    if (ch >= 'a' && ch <= 'z') {
        
        ch = ch - 'a' + 'A';// 通过asc码加减将小写字母转换为大写字母
        cout << "转换后的字符为: " << ch << endl;
    }
    else {
        // 输出后继字符的 ASCII 值
        cout << "下一个字符的 ASCII 值为: " << static_cast<int>(ch) + 1 << endl;
    }

    return 0;
}