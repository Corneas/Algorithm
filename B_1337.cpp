#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
const int MAX = 2147483647;

int main(void) {

	vector<int> v;

	int c;
	int n;
	int chain = 1;
	int answer = 0;
	cin >> c;

	for (int i = 0; i < c; ++i) {
		cin >> n;
		v.push_back(n);
	}

	for (int i = 0; i < 5; ++i) {
		v.push_back(MAX);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < c; ++i) {
		int k = 1;
		for (int j = i + 1; j < i + 5; ++j) {
			if (v[j] - v[i] < 5) {
				k++;
			}
		}
		answer = max(answer, k);
	}

	if (answer - 5 > 0) {
		cout << 0;
	}
	else {
		cout << 5 - answer;
	}
}