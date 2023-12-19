#include<iostream>
using namespace std;

int main() {
	int a[10], i, j, t, N = 10;
	cout << "请输入十个数字";
	for (int b = 0; b <= 9; b++) cin >> a[b];
	for (j = 0; j < 9; j++)
		for (i = 0; i < 9 - j; i++)
			if (a[i] > a[i + 1])
				t = a[i], a[i] = a[i + 1], a[i + 1] = t;
	for (i = 0; i < 10; i++) cout << a[i] << endl;
}