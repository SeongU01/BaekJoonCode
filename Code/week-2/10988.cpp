#include<iostream>
using namespace std;

//x축에는 받은 점수 1~5점 4개->받고 더하는 sum의 배열
//y축에는 요리사의 수 5명
//0점 지정해주고 sum비교, 최대값 갱신후 몇번 참가자인지 저장
//참가자 번호, sum출력

int main()
{
	int arr[5][4];
	int sum[5] = { 0, };//점수 총합의 배열. 초기화
	int topSum = 0;//갱신해줄 최고점수
	int topSumIdx;//최고점수를 가지는 요리사 번호
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];//i번 요리사 점수 입력
			sum[i] += arr[i][j];//i번 요리사 점수 총합 바로 더하기
		}
		if (sum[i] > topSum)//최고점수보다 i번 요리사 점수 합이 크면
		{
			topSum = sum[i];//최고점수 갱신
			topSumIdx = i+1;//최고점수 요리사번호 갱신
		}
	}

	cout << topSumIdx << " " << topSum;


	return 0;
}