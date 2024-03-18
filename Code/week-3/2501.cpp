#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;
	int n = 1;
	vector<int>arr;
	while (n <= N)
	{
		if (N % n == 0)
		{
			arr.push_back(n);
		}
		n++;
	}
	bool check = false;
	if (arr.size() < K)
	{
		cout << "0";
	}

	else
		cout << arr[K - 1];
	
	return 0;
}