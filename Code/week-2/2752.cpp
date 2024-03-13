#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < (2*n-1); i++)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			cout << " ";
		}
		cout << "*";
		for (int j = n - 1; j >= 0; j--)
		{
			cout << " ";
		}
		cout << '\n';
	}
	return 0;
}