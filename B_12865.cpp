#include <iostream>

using namespace std;

int DP[101][100001];
int w[101];	// ��ǰ ����
int v[101];	// ��ǰ ��ġ

int main(void) {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N;	// ��ǰ ��
	int K;	// �ִ� ����

	cin >> N >> K;

	for (int i = 0; i <= N; ++i) {
		cin >> w[i] >> v[i];
	}

	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= K; ++j) {
			if (v[i] > K) {
				DP[j][i] = DP[i - 1][w[j]];
			}
			else {
				
			}
		}
	}

	cout << DP[N][K];
	return 0;

}