#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sumRest=0;

	for (int i = 0; i < n; i++)
	{
		int student,apple;
		cin >> student >> apple;
		sumRest += apple % student;

	}
	cout << sumRest;
	return 0;
}