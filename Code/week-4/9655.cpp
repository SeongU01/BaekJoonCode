#include<iostream>
using namespace std;

int Min(int a, int b)
{
	if (a >= b)
		return b;
	else
		return a;
}

int main()
{
	int N;
	cin >> N;
	int* arr = new int[N + 1] {};
	int picks[2] = { 1,3 };
	arr[0] = 0;
	for (int i = 1; i < N + 1; i++)
	{
		arr[i] = 1001;
	}

	for (int pick : picks)
	{
		for (int i = pick; i <= N; i++)
		{
			arr[i] = Min(arr[i], arr[i - pick] + 1);
		}
	}


	if (arr[N] % 2 == 1)
		cout << "SK";
	else
		cout << "CY";
}