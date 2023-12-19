#include<iostream>
using namespace std;
void merge(const int list1[], const int list2[])
{
	
	int list3[100],t=0,j=0;
	for (int i = 0; i <=100; ++i) 
	{ 
		for (int y = 0; y <= 100; y++)
		{
			list3[i] = list1[y];
		}
		for (int j = 0; j <= 100; ++j) 
		{	
			list3[i + j] = list2[j];
		}
	}

	for (int t = 0; t <=100; ++t) 
	{
		if (list3[t] > 0)
			cout << list3[t] << " ";
		else break;
	}	
}
int main()
{
	int m[100], n[100];
	cout << "划入两个字符串，输入负数时停止";
	for (int i = 0; i <=100; ++i) 
	{
		cin >> m[i];
		if (m[i]<0)
		{
			break;
		}
	}
	for (int i = 0; i <=100; ++i) 
	{ 
		cin >> n[i];
		if (n[i] < 0)
		{
			break;
		}
	}
	merge(m, n);
	
}