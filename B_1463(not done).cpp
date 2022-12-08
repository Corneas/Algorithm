#include <iostream>
#include <vector>

using namespace std;

int DP[10000001] = { 0 };

int main(void) {

	int n;
	cin >> n;

	int count = 0;

	DP[0] = 0;
	DP[1] = 1;

	for (int i = 2; i < n; ++i) {
		DP[i] = DP[i - 1] + 1;
		
	}

	cout << count;
}