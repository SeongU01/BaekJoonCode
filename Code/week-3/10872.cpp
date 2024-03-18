#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int multiple = 1;

	for (int i = 1; i <= n; i++)
	{
		multiple *= i;
	}

	cout << multiple;
	return 0;
}
