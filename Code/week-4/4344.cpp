
#include<iostream>
using namespace std;

int main()
{
	int testCase;
	cin >> testCase;

	for (int i = 0; i < testCase; i++)
	{
		int count = 0;
		int sum = 0;
		int num;
		cin >> num;
		double *arr = new double[num];
		for (int j = 0; j < (int)num; j++)
		{
			int score;
			cin >> score;
			arr[j] = score;
			sum += score;
		}
		double average = (sum / num);

		for (int j = 0; j < num; j++)
		{
			if (arr[j] > average)
			{
				count++;
			}
		}
		double answer = (double)count / (double)num;

		cout << fixed;
		cout.precision(3);
		cout<<answer*100<< "%\n";
		delete arr;
	}

	return 0;
}