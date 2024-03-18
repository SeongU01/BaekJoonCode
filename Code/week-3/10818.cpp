#include<iostream>
using namespace std;

void Sort(int arr[],int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int [n] {0, };

	for (int i = 0; i < n;i++)
	{
		cin >> arr[i];
	}
	Sort(arr, n);
	cout << arr[0] << " " << arr[n - 1];
	return 0;
}