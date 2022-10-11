#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

const int MAX = 1001;

int main(void) {

	int c = 0;
	int n = 0;
	int answer = 0;

	cin >> c;

	int prime[MAX];
	vector<int> v;

	for (int i = 0; i < c; ++i) {
		cin >> n;
		v.push_back(n);
	}

	prime[0] = 0;
	prime[1] = 0;

	for (int i = 2; i < MAX; ++i) {
		prime[i] = i;
	}

	for (int i = 2; i <= sqrt(MAX); ++i) {

		if (prime[i] == 0) {
			continue;
		}

		for (int j = i * i; j < MAX; j += i) {
			prime[j] = 0;
		}

	}

	for (int i = 0; i < v.size(); ++i) {
		if (prime[v[i]] > 1) {
			answer++;
		}
	}

	cout << answer;
}