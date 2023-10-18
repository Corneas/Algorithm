#include <iostream>

using namespace std;

int dp[1001] = { 0 };

int main(void) {

	int n = 0;
	cin >> n;

	dp[0] = 1;
	dp[1] = 2;

	for (int i = 2; i < n; ++i) {
		dp[i] = (dp[i - 2] + dp[i - 1]) % 10007;
	}

	cout << dp[n - 1];

}