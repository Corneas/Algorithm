#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int b = x;
    int sum = 0;

    while (b) {
        sum += b % 10;
        b /= 10;
    }

    //if (x % sum == 0) {
    //    answer = true;
    //}
    //else answer = false;

    return x % sum ? false : true;
}