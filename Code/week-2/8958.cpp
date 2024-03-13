#include<iostream>
#include<string>
using namespace std;

int main()
{
	int N;//case °¹¼ö
	cin >> N;
	
	
	for (int i = 0; i < N; i++)
	{
		int a = 0;
		int sum = 0;
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'O')
			{
				a++;
				sum += a;
			}
			else
				a = 0;
		}

		cout << sum<<"\n";
	}
	return 0;
}