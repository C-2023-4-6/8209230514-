#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString) {
	int a, b = 0;
	a = strlen(hexString);

	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
			b += (10 + (hexString[i] - 'A')) * (pow(16, a - 1 - i));
		else
			b += (hexString[i] - '0') * pow(16, a - i - 1);

	}
	return b;
}
int main() {
	char s[100];
	cin.getline(s, 100);
	cout << parseHex(s);
}