#include<iostream>
using namespace std;

int main()
{
	int score[10];
	int scoreDiff[10]{ 0, };
	int answer = 0;
	int Min=0;
	for (int i = 0; i < 10; i++)
	{
		cin >> score[i];
	}

	for (int i = 0; i < 10; i++)
	{
		answer += score[i];
		if (100 - answer >= 0)
			scoreDiff[i] = 100 - answer;
		else
		{
			scoreDiff[i] = answer - 100;
			Min = i ;
			break;
		}
	}

	if (answer <= 100&&Min==0)
	{
		cout << answer;
	}
	else
	{
		if (scoreDiff[Min - 1] < scoreDiff[Min])
			cout << answer - score[Min];

		else
			cout << answer;
	}

	return 0;
}