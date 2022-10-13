#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;
	vector<int> v;
	int temp = n;
	int count = 0;
	int tempCount = 0;

	while (temp > 0) {
		v.push_back(temp % 2);
		temp /= 2;
	}

	for (int i = 0; i < v.size(); ++i) {
		if (v[i] == 1) {
			count++;
		}
	}

	while (tempCount != count) {
		temp = ++n;
		tempCount = 0;
		v.clear();

		while (temp > 0) {
			v.push_back(temp % 2);
			temp /= 2;
		}

		for (int i = 0; i < v.size(); ++i) {
			if (v[i] == 1) {
				tempCount++;
			}
		}

	}

	answer = n;

	return answer;
}