#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> coins(n);
    vector<int> answer(k + 1, 10001); // k+1 ũ���� ���͸� 10001�� �ʱ�ȭ

    answer[0] = 0; // 0���� ����� �� �ʿ��� ������ ���� 0��

    for (int i = 0; i < n; ++i) 
    {
        cin >> coins[i];
    }

    for (int coin:coins) 
    {
        for (int i=coin; i <= k; ++i) {
            answer[i] = min(answer[i], answer[i-coin] + 1);
        }   
    }

    if (answer[k] == 10001)
        cout << -1; // k���� ���� �� ���� ���
    else
        cout << answer[k]; // k���� ����� �� �ʿ��� �ּ� ���� ���� ���

    return 0;
}
