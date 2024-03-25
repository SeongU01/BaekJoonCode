#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int count = 0;
	int temp = num;

	while (true)
	{
		int a = temp % 10;
		int b = ((a + temp / 10))%10;
		temp = (a * 10) + b;
		count++;
		if (temp == num)
			break;
	}

	cout << count;
}