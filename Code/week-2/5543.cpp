#include<iostream>
using namespace std;

int main()
{
	int burger[3];//���Ű���0 3��
	int drink[2];//���ᰡ�� 2��
	int minMoney = 9999;
	int setMoney;

	for (int i = 0; i < 3; i++)
	{
		cin >> burger[i];
	}
	for (int i = 0; i < 2; i++)
	{
		cin >> drink[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			setMoney = burger[i] + drink[j];
			if (setMoney < minMoney)
			{
				minMoney = setMoney;
			}
		}
	}
	cout << minMoney - 50;

	return 0;

}