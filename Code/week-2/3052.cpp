#include<iostream>
using namespace std;

int main()
{
	int remain[42] = { 0, };//나머지 갯수 체크하기
	int num[10] = { 0, };//숫자의 배열
	int answer = 0;//서로다른 나머지의 갯수
	
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
		remain[num[i] % 42]++;//나머지가 뭔지 체크하기
	}

	for (int i = 0; i < 42; i++)
	{
		if (remain[i] != 0)
			answer++;
	}

	cout << answer;
	return 0;
}