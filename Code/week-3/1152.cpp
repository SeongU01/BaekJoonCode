#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;

	//���� �����ؼ� ���ڿ� �޴� �Լ�
	getline(cin, str);
	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			cnt++;
		}
	}
	if (str[0] == ' ' || str[str.length() - 1] == ' ')
	{
		cnt--;
	}
	cout << cnt+1;

}