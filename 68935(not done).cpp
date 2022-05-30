#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> ternary;
	int a = 1;

    while (n > 0) {
		ternary.push_back(n % 3);
        n /= 3;
    }

	for (int i = ternary.size() - 1; i > 0; i--) {
		answer += (ternary[i] % 10) * a;
		a *= 3;
	}

	return answer;
}