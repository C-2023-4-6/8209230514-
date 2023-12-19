#include <iostream>
using namespace std;
#include<string>
int main() {
    string input;
    cout << "请输入一行字符：";
    getline(cin, input);
    int letter = 0;
    int space = 0;
    int number = 0;
    int other = 0;

    for (char c : input)
    {
        if (isalpha(c))
        { // 判断是否为字母
            letter++;
        }
        else if (isspace(c)) 
        { // 判断是否为空格
            space++;
        }
        else if (isdigit(c)) 
        { // 判断是否为数字字符
            number++;
        }
        else 
        { // 其它字符
            other++;
        }
    }

    cout << "英文字母个数：" << letter << endl;
    cout << "空格个数：" << space << endl;
    cout << "数字字符个数：" << number << endl;
    cout << "其它字符个数：" << other << endl;

    return 0;
}