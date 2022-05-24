#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
	long long answer = 0;
	long long m = 0;
	long long root = 0;
	long long rooot = 1;
	vector<int> num;

	while (n) {
		m = n % 10;
		num.push_back(m);
		n /= 10;
	}

	sort(num.rbegin(), num.rend());

	root = num.size();

	for (int i = 0; i < num.size(); i++) {
		for (int j = root; j > 1; j--) {
			rooot *= 10;
		}
		answer += num[i] * rooot;
		root--;
		rooot = 1;
	}

	return answer;
}