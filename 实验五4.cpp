#include<iostream>
using namespace std;
class student {
public:
	void set(int n, double s)
	{
		num = n;
		score = s;
		cout << "学号" << num << "\t "<< "分数" << score << endl;
	};
	int get_num() {
		return num;
	};
	double get_score() {
		return score;
	};

private:
	int num;
	double score;
};
void max(student* stud, int size)
{
	int t = 0;
	double j = stud[0].get_score();
	for (int i = 0; i < size; i++) {
		if (stud[i].get_score() > j)
		{
			t = i;
			j = stud[i].get_score();
		}
		
	}
	cout << "最高成绩的学生学号和分数：" <<t+1<<"\t" << j << endl;
}
int main() 
{
	student students[5];

	students[0].set(1, 90.5);
	students[1].set(2, 85.0);
	students[2].set(3, 92.0);
	students[3].set(4, 88.5);
	students[4].set(5, 95.5);
	max(students, 5);

	return 0;
}