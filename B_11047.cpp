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
            // coin[i]�� ��� �� �� �ִ��� ������
            count += K / coin[i];
            // coin[i]�� �� ��ŭ K���� ����
            K = K % coin[i];
        }
        // K�� 0�̶�� ��ž
        if (!K) break;
    }

    cout << count;
}