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
   
    cout << "第一天摘的桃子数量为：" << peach_num << endl;
    return 0;
}