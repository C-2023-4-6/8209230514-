#include <iostream>
#include <cmath>
using namespace std;
int get(int day) 

{
    if (day < 10)
    {
        return get(day + 1) * 2;
    }
    else return day;
}

int main() {
    int peach_num = get(1);
   
    cout << "��һ��ժ����������Ϊ��" << peach_num << endl;
    return 0;
}