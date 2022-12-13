#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long modMul(long long n, int mul) {
    return ((n % 1000000007) * (mul % 1000000007)) % 1000000007;
}

long long modSub(long long n, int sub) {
    return ((n % 1000000007) - (sub % 1000000007) + 1000000007) % 1000000007;
}

int solution(int n) {
    int answer = 0;

    long long s[5001] = { 0 };

    int width = n; 
    int length = 3;

    s[0] = 0;
    s[2] = 3;
    s[4] = 11;

    if ((width * length) % 2 != 0) {
        return 0;
    }

    for (int i = 6; i <= n; i+=2) {
        s[i] = modSub(modMul(s[i - 2], 4) , (s[i - 4])) % 1000000007;
    }

    answer = s[n] % 1000000007;


    return answer;
}

int main(void) {

    int n;
    cin >> n;
    cout << solution(n);

}