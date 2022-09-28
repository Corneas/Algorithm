#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector<int> v;

	int n = 0;
	int a = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a;

		v.push_back(a);
	}

	sort(v.begin(), v.end());

	n = v.front() * v.back();

	cout << n;
}