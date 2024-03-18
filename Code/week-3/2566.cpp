#include<iostream>
using namespace std;

int main()
{	
	//9x9배열생성
	int arr[9][9] = { 0, };
	//최대값 생성
	int max = 0;
	//y,x생성
	int y, x;

	//2차원 배열 입력받기
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
		}
	}

	//최대값 비교
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			//최대값찾기
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				y = i+1;
				x = j+1;
			}
		}
	}

	cout << max << endl << y << " " << x<<endl;
	return 0;
}