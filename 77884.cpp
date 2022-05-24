#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;

    int even = 0;
    int odd = 0;

    for (int i = left; i <= right; i++) {
        int n = 0;
        for (int j = 1; j <= i; j++) {

            if (i % j == 0) {
                n++;
            }
        }
        if (n % 2 == 0) {
            even += i;
        }
        else if (n % 2 != 0) {
            odd += i;
        }
    }

    return answer += even - odd;
}