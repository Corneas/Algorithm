#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    long s[2501] = { 0 };

    int width = n;
    int length = 3;

    s[0] = 0;
    s[1] = 3;
    s[2] = 11;

    if ((width * length) % 2 != 0) {
        return 0;
    }

    for (int i = 3; i <= n; ++i) {
        s[i] = ((4 * s[i - 1]) - (s[i - 2]));
    }

    answer = s[n / 2];


    return answer;
}

int main(void) {

    int n;
    cin >> n;
    cout << solution(n);

}