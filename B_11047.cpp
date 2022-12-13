#include <iostream>

using namespace std;


int main(void) {

	int n;
	int k = 0;
	int answer = 0;
	int pivot = 0;
	int temp = 0;

	cin >> n >> k;

	int* coin = new int[n];

	for (int i = 0; i < n; ++i) {
		cin >> coin[i];
	}

	while (coin[pivot] < k) {
		if (pivot > n) {
			pivot = n;
			break;
		}
		++pivot;
	}

	--pivot;

	while (temp != k) {
		if (coin[pivot] > k - temp) {
			pivot--;
			continue;
		}

		temp += coin[pivot];
		answer++;
	}

	cout << answer;

}