#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::vector;
using std::string;

int main()
{
	int grade;
	cin >> grade;
	const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	string lettergrade;
	if (grade<60)
	{
		lettergrade = scores[0];
	}
	else
	{
		lettergrade = scores[(grade - 50) / 10];
	}

	system("pause");
	return 0;
}
