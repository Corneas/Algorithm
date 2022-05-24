#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;

    float root = sqrt(n);

    if (root - (int)root == 0) {
        answer = pow(root + 1, 2);
    }
    else return -1;

    return answer;
}

