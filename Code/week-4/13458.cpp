#include<iostream>
using namespace std;

int main()
{
	int N,I,B,C;
	long long answer=0;
	cin >> N;

	int *arr=new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> I;
		arr[i] = I;
	}

	cin >> B >> C;

	for (int i = 0; i < N; i++)
	{
		int inspector, subInspector;
		inspector = 1;
		if (arr[i] > B)
		{
			if (((arr[i] - B) % C)!=0)
				subInspector = ((arr[i] - B) / C) + 1;
			else
				subInspector = ((arr[i] - B) / C);
		}
		else
			subInspector = 0;

		answer += (inspector + subInspector);
	}

	cout << answer;
	
	return 0;
}