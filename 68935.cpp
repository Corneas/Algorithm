#include <string>
#include <stack>

using namespace std;

int solution(int n) {
    int answer = 0;
	stack<int> ternary;
	int a = 1;

    while (n > 0) {
		ternary.push(n % 3);
        n /= 3;
    }
	while (!ternary.empty()) {
		answer += ternary.top() * a;
		a *= 3;
		ternary.pop();
	}

	return answer;
}