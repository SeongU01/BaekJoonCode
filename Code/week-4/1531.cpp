#include<iostream>
using namespace std;
int arr[100][100]{ 0, };

int Check(int arr[100][100], int m)
{
	int cnt = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] > m)
				cnt++;
		}
	}
	return cnt;
}

int main()
{
	int N, M;
	cin >> N >> M;
	int x[2], y[2];
	int cnt = 0;
	while (N > 0)
	{
		int xdiff, ydiff;
		for (int i = 0; i < 2; i++)
		{
			cin >> x[i] >> y[i];
		}
		xdiff = x[1] - x[0];
		ydiff = y[1] - y[0];
		for (int i = x[0]-1; i < x[0] + xdiff; i++)
		{
			for (int j = y[0]-1; j < y[0] + ydiff ; j++)
			{
				arr[i][j]++;
			}
		}

		N--;
		

	}
	cnt = Check(arr,M);

	cout << cnt;
	return 0;
}