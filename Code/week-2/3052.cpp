#include<iostream>
using namespace std;

int main()
{
	int remain[42] = { 0, };//������ ���� üũ�ϱ�
	int num[10] = { 0, };//������ �迭
	int answer = 0;//���δٸ� �������� ����
	
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
		remain[num[i] % 42]++;//�������� ���� üũ�ϱ�
	}

	for (int i = 0; i < 42; i++)
	{
		if (remain[i] != 0)
			answer++;
	}

	cout << answer;
	return 0;
}