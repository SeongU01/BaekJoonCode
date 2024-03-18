#include<iostream>
#include<string>
using namespace std;

int main()
{
	
	string str;
	//문자열 입력받기
	cin >> str;

	//숫자 덧셈
	int sum = 0;
	
	//char형 변수가 str이라는 배열을 0~끝까지 탐색을함 이라는 반복문
	for (char a : str)
	{
		//각각 문자는 아스키코드로변환되며 아스키코드 A=65이다.
		if (a <= 'C')
			sum += 3;
		else if (a <= 'F')
			sum += 4;
		else if (a <= 'I')
			sum += 5;
		else if (a <= 'L')
			sum += 6;
		else if (a <= 'O')
			sum += 7;
		else if (a <= 'S')
			sum += 8;
		else if (a <= 'V')
			sum += 9;
		else if (a <= 'Z')
			sum += 10;
	}
	cout << sum;
	return 0;
}