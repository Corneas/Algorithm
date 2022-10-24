#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

	int answer = 0;

	int sum = 0;
	int n = 0;

	cin >> n >> sum;

	vector<int> v(n);

	int iSum = 0;
	int left = 0;
	int right = -1;

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	while (right < n) {
		if (iSum < sum) {
			if (++right < n) {
				iSum += v[right];
			}
		}
		else if (iSum > sum) {
			iSum -= v[left++];
		}

		if (iSum == sum) {
			answer++;
			if (++right < n) {
				iSum += v[right];
			}
		}
	}

	cout << answer;
}