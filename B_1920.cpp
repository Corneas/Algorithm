#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int m;

	vector<int> v;

	vector<int> answer;

	cin >> n;
	int num;
	for (int i = 0; i < n; ++i) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cin >> m;

	for (int i = 0; i < m; ++i) {
		answer.push_back(0);
	}

	int low = 0;
	int high = n;
	int mid = 0;

	for (int i = 0; i < m; ++i) {

		cin >> num;

		low = 0;
		high = n;
		mid = (low + high) / 2;

		while (low <= high) {

			mid = (low + high) / 2;

			if (mid >= n) {
				break;
			}

			if (v[mid] == num) {
				answer[i] = 1;
				break;
			}
			else if (v[mid] < num) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}

		}
	}

	for (int i = 0; i < m; ++i) {
		cout << answer[i] << "\n";
	}

}