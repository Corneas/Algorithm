#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    int Fibo[60000] = { 0 };

    Fibo[0] = 1;
    Fibo[1] = 1;

    for (int i = 2; i <= n; ++i) {
        Fibo[i] = ((Fibo[i - 1] % 1000000007) + (Fibo[i - 2] % 1000000007)) % 1000000007;
    }

    answer = Fibo[n];

    return answer;
}