#include<iostream>
using namespace std;

void sort(int arr[])//�����Ʈ
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j<6 - i; j++)
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
 	int num[7] = { 0, };//����7�� �迭 0���� �ʱ�ȭ

	int T;//case ����
	cin >> T;
	

	for (int i = 0; i < T; i++)//case�� ������ŭ ����ϱ�
	{
		int sum = 0;//¦���� �� �ʱ�ȭ, �ٷιٷ� �����ַ���
		for(int j=0;j<7;j++)//7���� ���� �Է� �ޱ�
		{ 
			cin >> num[j];
			if (num[j] % 2 == 0)//¦�����
				sum += num[j];
		}

		sort(num);
		//�迭�� ���ڷ� �ѱ涧 �̱� �迭�� ù�� ° ���Ҹ� ����Ű�� �����ͷ� �ڵ����� ��ȯ��. �̹� �ּҸ� �ѱ������

		cout << sum <<" ";//�հ� �ּҰ� ����ϱ�
		for (int j = 0; j < 7; j++)//¦���� �ּҰ� �˻�
		{
			if (num[j] % 2 == 0)//�ּҰ� ¦���� ����� for�� Ż��
			{
				cout << num[j]<<"\n";
				break;
			}
		}
	}

	

	return 0;
}
