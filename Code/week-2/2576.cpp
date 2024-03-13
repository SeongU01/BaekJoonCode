#include<iostream>
using namespace std;

void Sort(int arr[])//7개 배열 오름차순 정렬 함수(bubble sort)
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}

bool CheckOddNum(int arr[])//숫자배열에 홀수가 있는지 확인하는 함수
{
	for (int i = 0; i < 7; i++)//7개 숫자배열 중
	{
		if (arr[i] % 2 == 1)//2로 나눴을때 나머지가 1이라면, 즉 홀수라면
		{
			return true;//참을 반환
		}
	}

	return false;//전부 짝수라면 위에 if문 안으로 들어가지못하기 때문에 false를 반환
}

int main()
{
	int num[7] = { 0. };//숫자 7개 배열 선언후 0으로 초기화.
	int sumOddNum = 0;//홀수들의 합, 0으로 초기화
	
	for (int i = 0; i < 7; i++)//숫자 7개 입력받기
	{
		cin >> num[i];//배열 i번째 입력하기 0~6
	}

	Sort(num);//숫자 배열 오름차순으로 정렬

	if (CheckOddNum(num))//배열에 홀수가 있다면
	{
		for (int i = 0; i < 7; i++)//배열 전부확인
		{
			if (num[i] % 2 == 1)//홀수라면
			{
				sumOddNum += num[i];//홀수의 합에 더해줌
			}
		}
		cout << sumOddNum<<endl;

		for (int i = 0; i < 7; i++)//배열 전부확인
		{
			if (num[i] % 2 == 1)//홀수라면
			{
				cout << num[i];//홀수중 최소값을 출력
				break;//최소값을 출력했기에 for문 탈출
			}
		}
	}
	else
		cout << "-1";//전부 짝수라면 -1을 출력
	
	return 0;
}