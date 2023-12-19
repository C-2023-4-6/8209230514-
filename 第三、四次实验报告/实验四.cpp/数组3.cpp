#include<iostream>
using namespace std;
int main()
{
	bool A[101];
	for (int i = 0; i <=100; i++)
	{
		A[i] = 0;
	}
	for (int i = 1; i <=100 ;i++)
		for (int j = 1; j <=100; j++)
		{
			if (j % i == 0)
			{
				A[j] = !A[j];
			}
		}
	for (int i = 1; i < 101; i++)
		if (A[i] == 1)
			cout << i << ' ';
}