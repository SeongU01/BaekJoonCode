#include<iostream>
using namespace std;

void Sort(int arr[])//오름차순 정렬(버블소트)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int num[3];//세수 배열
	for (int i = 0; i < 3; i++)
	{
		cin >> num[i];
	}

	Sort(num);

	cout << num[1];//두번째수 출력
	
	return 0;
}