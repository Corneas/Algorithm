#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    int jump[2001];
    jump[1] = 1;
    jump[2] = 2;
    for (int i = 3; i <= n; ++i) {
        jump[i] = (jump[i - 2] + jump[i - 1]) % 1234567;
    }
    answer = jump[n];

    return answer;
}