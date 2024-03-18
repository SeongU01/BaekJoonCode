#include<iostream>
using namespace std;

int main()
{
	int a, b;//a=(1),b=(2)
	cin >> a >> b;
	int answer=1;

	for (int i = 0; i < 2; i++)
	{
		int temp = b;
		int j = i;
		while (j > 0)
		{
			temp = temp / 10;
			j--;
		}
		temp = temp % 10; 
		cout << a * temp << endl;
	}

	cout << a * b << endl;

	return 0;
	//1의자리
	//int c = b % 10;
	//10의자리
	//int d = (b / 10) % 10;
	//100의자리
	//int e = (b / 100) % 10;
}