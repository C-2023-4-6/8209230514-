#include <iostream>
using namespace std;
int main() {
    const double money = 0.8;//����۸���
    int total = 2;//ƻ������
    int before = 2;//��һ��ƻ����
    double Price = total * money;//�ܼ�Ǯ
    int day = 1;//����

    while (total <= 100) 
    {
        int after = before * 2;
        total += after;//ѭ������ƻ����
        Price += after * money;//������Ǯ
        
        day++;//������
    }

    double average = Price / day;
    cout << "ÿ��ƽ�����ѣ�" << average<< " Ԫ" << endl;

    return 0;
}
