#include<iostream>
#include<string>
using namespace std;

int main()
{
	
	string str;
	//���ڿ� �Է¹ޱ�
	cin >> str;

	//���� ����
	int sum = 0;
	
	//char�� ������ str�̶�� �迭�� 0~������ Ž������ �̶�� �ݺ���
	for (char a : str)
	{
		//���� ���ڴ� �ƽ�Ű�ڵ�κ�ȯ�Ǹ� �ƽ�Ű�ڵ� A=65�̴�.
		if (a <= 'C')
			sum += 3;
		else if (a <= 'F')
			sum += 4;
		else if (a <= 'I')
			sum += 5;
		else if (a <= 'L')
			sum += 6;
		else if (a <= 'O')
			sum += 7;
		else if (a <= 'S')
			sum += 8;
		else if (a <= 'V')
			sum += 9;
		else if (a <= 'Z')
			sum += 10;
	}
	cout << sum;
	return 0;
}