#include<iostream>
using namespace std;

int main()
{
	//적정체력 o선언
	int o = 0;
	//현재체력 w선언
	int w = 0;
	//입력받을 문자 input 선언
	char input = '?';
	//변하는 체력값 health선언
	int health = -1;
	//순서 선언 ex)1 : ,2 : 
	int cnt = 0;

	//마지막 0,0입력될때까지 case돌리기
	while (true)
	{

		bool isDead = false;

		//적정체력,현재 체력 입력
		cin >> o >> w;

		//0,0을 입력을 받으면
		if (o == 0 && w == 0)
			break;

		//#문자 입력받을때까지 펫 한마리 반복시키기
		while (true)
		{
			cin >> input >> health;


			if (input == 'E')
			{
				w -= health;
			}
			else if (input == 'F')
			{
				w += health;
			}
			else if (input == '#')
			{
				break;
			}

			if (w <= 0)
			{
				isDead = true;
			}
		}

		cnt++;

		//현재체력이 0아래라면
		if (isDead)
		{
			cout << cnt << " RIP" << endl;
			continue;
		}

		//현재체력이 적정체력의 반 초과이며 2배 미만이면
		if (w>o/2&&w<o*2)
		{
			cout << cnt << " :-)" << endl;
		}

		else
		{
			cout << cnt << " :-(" << endl;
		}
	}

	return 0;

}