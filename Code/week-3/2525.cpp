#include<iostream>
using namespace std;

int Hour(int H)
{
	while (H >= 24)
	{
		H = H - 24;
	}

	return H;
}

int main()
{
	int H, M;
	int time;
	cin >> H >> M;
	cin >> time;

	if (M + time >= 60)
	{
		H =H+ ((M + time) / 60);
		M = (M + time) % 60;

		if (H >= 24)
		{
			H=Hour(H);
		}

		cout << H << " " << M ;
		return 0;
	}


	

	cout << H << " " << M + time;
	return 0;
}