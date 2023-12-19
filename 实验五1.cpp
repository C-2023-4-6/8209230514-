#include<iostream>
using namespace std;
class Time             // ¶¨ÒåTimeÀà
{
private:             
	int hour;
	int minute;
	int sec;
public:
	void print()
	{
		cin >> hour >> minute >> sec;
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time tl;  
	tl.print();
}

