#include <iostream>

using namespace std;
int coin[10];
int main() {
    int N;
    int K;
    int count = 0;

    cin >> N >> K;

    for (int i = 0; i < N; i++)
        cin >> coin[i];

    for (int i = N - 1; i >= 0; i--)
    {
        if (K >= coin[i])
        {
            // coin[i]가 몇번 들어갈 수 있는지 더해줌
            count += K / coin[i];
            // coin[i]가 들어간 만큼 K에서 빼줌
            K = K % coin[i];
        }
        // K가 0이라면 스탑
        if (!K) break;
    }

    cout << count;
}