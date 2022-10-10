#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum = i;
        if (i == n) {
            answer++;
            break;
        }
        for (int j = i + 1; j < n; ++j) {
            sum += j;
            if (sum == n) {
                answer++;
                break;
            }
            else if (sum > n) {
                break;
            }
        }
    }

    return answer;
}

int main(void) {
    int n;
    cin >> n;

    int answer = 0;
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum = i;
        if (i == n) {
            answer++;
            break;
        }
        for (int j = i + 1; j < n; ++j) {
            sum += j;
            if (sum == n) {
                answer++;
                break;
            }
            else if (sum > n) {
                break;
            }
        }
    }

    cout << answer;
}