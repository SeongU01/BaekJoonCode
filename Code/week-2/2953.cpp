#include<iostream>
using namespace std;

//x�࿡�� ���� ���� 1~5�� 4��->�ް� ���ϴ� sum�� �迭
//y�࿡�� �丮���� �� 5��
//0�� �������ְ� sum��, �ִ밪 ������ ��� ���������� ����
//������ ��ȣ, sum���

int main()
{
	int arr[5][4];
	int sum[5] = { 0, };//���� ������ �迭. �ʱ�ȭ
	int topSum = 0;//�������� �ְ�����
	int topSumIdx;//�ְ������� ������ �丮�� ��ȣ
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];//i�� �丮�� ���� �Է�
			sum[i] += arr[i][j];//i�� �丮�� ���� ���� �ٷ� ���ϱ�
		}
		if (sum[i] > topSum)//�ְ��������� i�� �丮�� ���� ���� ũ��
		{
			topSum = sum[i];//�ְ����� ����
			topSumIdx = i+1;//�ְ����� �丮���ȣ ����
		}
	}

	cout << topSumIdx << " " << topSum;


	return 0;
}