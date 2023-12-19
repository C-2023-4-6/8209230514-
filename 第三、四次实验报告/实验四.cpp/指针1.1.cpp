#include<iostream>


int main()
{
int i, j, * pi, * pj;     //此处的*表示定义指针变量，而非间接运算符
pi = &i;
pj = &j;
i = 5; j = 7;
std::cout << i << '\t' << j << '\t' << pi << '\t'<< pj;
std::cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
    }