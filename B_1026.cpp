#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

	int answer = 0;

	vector<int> A;
	vector<int> B;
	int a;
	int b;
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a;
		A.push_back(a);
	}
	for (int i = 0; i < n; ++i) {
		cin >> b;
		B.push_back(b);
	}

	sort(A.begin(), A.end());
	sort(B.rbegin(), B.rend());

	for (int i = 0; i < A.size(); ++i) {
		answer += A[i] * B[i];
	}

	cout << answer;
}