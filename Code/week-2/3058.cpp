#include<iostream>
using namespace std;

void sort(int arr[])//버블소트
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j<6 - i; j++)
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

int main()
{
 	int num[7] = { 0, };//숫자7개 배열 0으로 초기화

	int T;//case 갯수
	cin >> T;
	

	for (int i = 0; i < T; i++)//case의 갯수만큼 출력하기
	{
		int sum = 0;//짝수의 합 초기화, 바로바로 더해주려고
		for(int j=0;j<7;j++)//7개의 숫자 입력 받기
		{ 
			cin >> num[j];
			if (num[j] % 2 == 0)//짝수라면
				sum += num[j];
		}

		sort(num);
		//배열을 인자로 넘길때 이기 배열의 첫번 째 원소를 가리키는 포인터로 자동으로 변환됨. 이미 주소를 넘기고있음

		cout << sum <<" ";//합과 최소값 출력하기
		for (int j = 0; j < 7; j++)//짝수중 최소값 검사
		{
			if (num[j] % 2 == 0)//최소값 짝수면 출력후 for문 탈출
			{
				cout << num[j]<<"\n";
				break;
			}
		}
	}

	

	return 0;
}
