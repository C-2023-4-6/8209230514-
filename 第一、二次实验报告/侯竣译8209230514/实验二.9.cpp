#include <iostream>
using namespace std;
int main() {
    const double money = 0.8;//定义价格常量
    int total = 2;//苹果总数
    int before = 2;//第一天苹果数
    double Price = total * money;//总价钱
    int day = 1;//天数

    while (total <= 100) 
    {
        int after = before * 2;
        total += after;//循环求总苹果数
        Price += after * money;//花多少钱
        
        day++;//多少天
    }

    double average = Price / day;
    cout << "每天平均花费：" << average<< " 元" << endl;

    return 0;
}
