#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int month[13] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string day[7] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };

    int sum = b;

    for (int i = 0; i < a - 1; i++) {
        sum += month[i];
    }

    answer = day[sum % 7];

    return answer;
}