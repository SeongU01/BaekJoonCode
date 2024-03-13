#include<iostream>
#include<algorithm>
using namespace std;

int Count(int arr[])
{
	int count = 0;
	int temp=arr[0];
	for (int i = 0; i < 3; i++)
	{
		if (temp == arr[i])
		{
			count++;
		}
	}

	return count;
}


int main()
{
	int x[3];//x좌표 배열
	int y[3];//y좌표 배열

	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
	}

	sort(x, x + 3);
	sort(y, y + 3);
	
	
	if (Count(x) == 1)
	{
		cout << x[0]<<" ";
		if (Count(y) == 1)
			cout << y[0];
		else
			cout << y[2];
	}
	else
	{
		{
			cout << x[2]<<" ";
			if (Count(y) == 1)
				cout << y[0];
			else
				cout << y[2];
		}
	}
		
	

	return 0;
}

//직사각형만들기->세좌표가 주어진다면 x좌표중 하나만있는거, y좌표중 하나만있는거를 골라서 새로운 좌표를 만들어라
