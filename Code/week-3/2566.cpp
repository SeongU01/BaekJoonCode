#include<iostream>
using namespace std;

int main()
{	
	//9x9�迭����
	int arr[9][9] = { 0, };
	//�ִ밪 ����
	int max = 0;
	//y,x����
	int y, x;

	//2���� �迭 �Է¹ޱ�
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
		}
	}

	//�ִ밪 ��
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			//�ִ밪ã��
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