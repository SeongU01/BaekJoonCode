#include<iostream>
using namespace std;

int main()
{
	//����ü�� o����
	int o = 0;
	//����ü�� w����
	int w = 0;
	//�Է¹��� ���� input ����
	char input = '?';
	//���ϴ� ü�°� health����
	int health = -1;
	//���� ���� ex)1 : ,2 : 
	int cnt = 0;

	//������ 0,0�Էµɶ����� case������
	while (true)
	{

		bool isDead = false;

		//����ü��,���� ü�� �Է�
		cin >> o >> w;

		//0,0�� �Է��� ������
		if (o == 0 && w == 0)
			break;

		//#���� �Է¹��������� �� �Ѹ��� �ݺ���Ű��
		while (true)
		{
			cin >> input >> health;


			if (input == 'E')
			{
				w -= health;
			}
			else if (input == 'F')
			{
				w += health;
			}
			else if (input == '#')
			{
				break;
			}

			if (w <= 0)
			{
				isDead = true;
			}
		}

		cnt++;

		//����ü���� 0�Ʒ����
		if (isDead)
		{
			cout << cnt << " RIP" << endl;
			continue;
		}

		//����ü���� ����ü���� �� �ʰ��̸� 2�� �̸��̸�
		if (w>o/2&&w<o*2)
		{
			cout << cnt << " :-)" << endl;
		}

		else
		{
			cout << cnt << " :-(" << endl;
		}
	}

	return 0;

}