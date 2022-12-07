#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long modMul(long long n, int mul) {
    return ((n % 1000000007) * (mul % 1000000007)) % 1000000007;
}

long long modSub(long long n, int sub) {
    return ((n % 1000000007) - (sub % 1000000007)) % 1000000007;
}

int solution(int n) {
    int answer = 0;

    long long s[2501] = { 0 };

    int width = n; 
    int length = 3;

    s[0] = 0;
    s[1] = 3;
    s[2] = 11;

    if ((width * length) % 2 != 0) {
        return 0;
    }

    for (int i = 3; i <= n; ++i) {
        s[i] = modSub(modMul(s[i - 1], 4) , (s[i - 2]));
    }

    answer = s[n / 2] % 1000000007;


    return answer;
}

int main(void) {

    int n;
    cin >> n;
    cout << solution(n);

}