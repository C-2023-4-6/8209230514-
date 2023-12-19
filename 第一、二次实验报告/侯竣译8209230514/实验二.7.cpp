#include<iostream>
using namespace std;
int main() 
{
	for(int a=0;a<=5;a++)
	{
		switch (a)
		{
		case 1:cout << "*"<<"\n"; break;
		case 2:cout << "**"<<"\n"; break;
		case 3:cout << "***"<<"\n"; break;
		case 4:cout << "****"<<"\n"; break;
		case 5:cout << "*****"<<"\n"; break;
		}
	}
}