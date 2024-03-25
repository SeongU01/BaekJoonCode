#include<iostream>
#include<string>
using namespace std;

int main()
{
	string A,B;
	cin >> A>>B;

	int answer=0;
	
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < B.size(); j++)
		{
			answer += (A[i] - '0') * (B[j] - '0');
		}
	}

	cout << answer;
}