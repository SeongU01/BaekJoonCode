#include<iostream>
using namespace std;
int area[100][100] = { 0, };

int Check(int area[100][100])
{
	int cnt = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (area[i][j] == 1)
				cnt++;
		}
	}
	return cnt;
}

int main()
{
	int cnt;
	int n = 4;
	int x[2], y[2];

	while (n > 0)
	{
		int xdiff, ydiff;
		for (int i = 0; i < 2; i++)
		{
			cin >> x[i] >> y[i];
		}
		xdiff = x[1] - x[0];
		ydiff = y[1] - y[0];
		for (int i = x[0]-1; i < x[0]+xdiff-1; i++)
		{
			for (int j = y[0]-1; j < y[0]+ydiff-1; j++)
			{
				if (area[i][j] != 0)
					continue;
				else
					area[i][j]++;
			}
		}
		n--;
	}
	
	cnt=Check(area);
	
	cout << cnt;
	return 0;

}