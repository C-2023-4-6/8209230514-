#include<iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point()
	{
		x = 60, y = 80;
	}
	void setPoint(int i, int j)
	{
		x = 60 + i, y= 80 + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")";
	}
};
int main() {
	Point a;
	int i, j;
	cin >> i >> j;
	a.setPoint(i,j);
	a.display();
}