#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int N;//학생수
	cin >> N;
	int a = 1;//숫자 임시 저장
	stack<int>stuNum;//학생 번호 저장공간
	for (int i = 0; i < N; i++)//학생 줄 세우고 한번 빵 돌리기
	{
		int num;
		cin >> num;
		stuNum.push(num);
		while (!stuNum.empty() && stuNum.top() == a)//학생번호가 a라면
		{
			stuNum.pop();//빵받기
			a++;//다음 학생 지정하기(a+1)
		}
	}

	if (stuNum.empty())
	{
		cout << "Nice";//다 받았다 굿굿
		return 0;
	}
	else
	{
		int b = N - a + 1;//빵 못받은 학생들

		for (int i = 0; i < b; i++)
		{
			if (stuNum.top() == a)//한명씩 서는 공간에 맨앞이 a번째면
			{
				stuNum.pop();//받아가
				a++;//다음
			}
			else //아니야
			{
				cout << "Sad";//유감
				return 0;
			}
		}

		cout << "Nice";//다 받았다 굿굿
		return 0;
	}

}

//just test
