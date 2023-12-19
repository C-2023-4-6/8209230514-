#include<iostream>
using namespace std;
void arr(int a[], int n)
{
	int fun;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (*(a + j) < *(a + i))
			{
				fun = *(a + j);
				*(a + j) = *(a + i);
				*(a + i) = fun;
			}
		}
	}
}
int main()
{
	int n;
	cout << "输入数组长度" << endl;
	cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> *(p + i);
	}
	arr(p, n);
	for (int i = 0; i < n; i++)
	{
		cout << *(p + i) << " ";
	}
	return 0;
}