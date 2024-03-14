#include<iostream>
#include<map>
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<string, bool> employee;

	for (int i = 0; i < n; i++)
	{
		string name, status;
		cin >> name >> status;
		
		if (status == "enter")
		{
			employee[name] = true;
		}
		else
		{
			employee[name] = false;
		}
	}

	for (auto it = employee.rbegin(); it != employee.rend(); it++)
	{
		if (it->second)
		{
			cout << it->first << "\n";
		}
	}

	return 0;
}

