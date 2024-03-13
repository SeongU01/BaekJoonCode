#include<iostream>
using namespace std;

int main()
{
	int node[8] = { 0, };
	int check = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> node[i];
	}

	if (node[0] == 1)
	{
		for (int i = 0; i < 7; i++)
		{
			if (node[i] + 1 == node[i + 1])
				check++;
			else
			{
				cout << "mixed";
				return 0;
			}
			
			if (check == 7)
			{
				cout << "acending";
				return 0;
			}
		}
	}
	else if (node[0] = 8)
	{
		for (int i = 0; i < 7; i++)
		{
			if (node[i] - 1 == node[i + 1])
				check++;
			else
			{
				cout << "mixed";
				return 0;
			}

			if (check == 7)
			{
				cout << "decending";
				return 0;
			}
		}
	}
	else
	{
		cout << "mixed";
		return 0;
	}
}

// c d e f g a b c C 1 2 3 4 5 6 7 8
//1~8 증가하면 acending 출력 8~1 감소하면 descending 출력 아니면 mixed 출력