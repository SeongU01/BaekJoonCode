#include<iostream>
using namespace std;

int add(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	if (sum/10!=0)
	{
		sum = add(sum);
	}
	return sum;
	
}

int main()
{
	int n;
	int answer;
	while (true)
	{
		cin >> n;
		if (n == 0)
		{
			break;
		}
		answer = add(n);
		cout << answer << endl;
	}
	return 0;
}
