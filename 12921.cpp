#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> prime;
    prime.push_back(0);
    prime.push_back(0);
    for (int i = 2; i <= n; i++)
        prime.push_back(n);

    for (int i = 2; i <= sqrt(n); i++) {
        if (prime[i] == 0)
            continue;
        for (int j = i * i; j <= n; j += i) {
            prime[j] = 0;
        }
    }

    for (int i = 0; i <= n; i++) {
        if (prime[i] != 0)
            answer++;
    }

    return answer;
}