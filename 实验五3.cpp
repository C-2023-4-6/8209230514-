#include<iostream>
using namespace std;
class cube {
private:
	int v;
public:
	double vo(double len, double hei, double wid)
	{
		
		v = len * hei * wid;
		return v;
		
	}
};
int main(){
	cube c1, c2, c3;
	double l1, l2, l3, w1, w2, w3, h1, h2, h3;
	cout << "请输入第一个长方体数据"<<"\n";
	cin >> l1 >> w1 >> h1;
	cout << "请输入第二个长方体数据"<<"\n";
	cin >> l2 >> w2 >> h2;
	cout << "请输入第三个长方体数据"<<"\n";
	cin >> l3 >> w3 >> h3;
	
	cout << "低一个长方体体积为"<<c1.vo(l1, w1, h1)<<endl;
	cout << "低二个长方体体积为" <<c2.vo(l2, w2, h2)<<endl; 
	cout << "低三个长方体体积为" << c3.vo(l3,w3,h3)<<endl;
}