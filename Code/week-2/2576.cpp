#include<iostream>
using namespace std;

void Sort(int arr[])//7�� �迭 �������� ���� �Լ�(bubble sort)
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6 - i; j++)
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

bool CheckOddNum(int arr[])//���ڹ迭�� Ȧ���� �ִ��� Ȯ���ϴ� �Լ�
{
	for (int i = 0; i < 7; i++)//7�� ���ڹ迭 ��
	{
		if (arr[i] % 2 == 1)//2�� �������� �������� 1�̶��, �� Ȧ�����
		{
			return true;//���� ��ȯ
		}
	}

	return false;//���� ¦����� ���� if�� ������ �������ϱ� ������ false�� ��ȯ
}

int main()
{
	int num[7] = { 0. };//���� 7�� �迭 ������ 0���� �ʱ�ȭ.
	int sumOddNum = 0;//Ȧ������ ��, 0���� �ʱ�ȭ
	
	for (int i = 0; i < 7; i++)//���� 7�� �Է¹ޱ�
	{
		cin >> num[i];//�迭 i��° �Է��ϱ� 0~6
	}

	Sort(num);//���� �迭 ������������ ����

	if (CheckOddNum(num))//�迭�� Ȧ���� �ִٸ�
	{
		for (int i = 0; i < 7; i++)//�迭 ����Ȯ��
		{
			if (num[i] % 2 == 1)//Ȧ�����
			{
				sumOddNum += num[i];//Ȧ���� �տ� ������
			}
		}
		cout << sumOddNum<<endl;

		for (int i = 0; i < 7; i++)//�迭 ����Ȯ��
		{
			if (num[i] % 2 == 1)//Ȧ�����
			{
				cout << num[i];//Ȧ���� �ּҰ��� ���
				break;//�ּҰ��� ����߱⿡ for�� Ż��
			}
		}
	}
	else
		cout << "-1";//���� ¦����� -1�� ���
	
	return 0;
}