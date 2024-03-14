#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> coins(n);
    vector<int> answer(k + 1, 10001); // k+1 크기의 벡터를 10001로 초기화

    answer[0] = 0; // 0원을 만드는 데 필요한 동전의 수는 0개

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
        cout << -1; // k원을 만들 수 없는 경우
    else
        cout << answer[k]; // k원을 만드는 데 필요한 최소 동전 개수 출력

    return 0;
}
