#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
        }
    }

    if (s[0] >= 97 && s[0] <= 122) {
        s[0] -= 32;
    }

    for (int i = 1; i < s.size(); ++i) {
        if (s[i - 1] == ' ' && s[i] != ' ') {
            if (s[i] >= 48 && s[i] <= 57) {
                continue;
            }
            else {
                s[i] -= 32;
            }
        }
    }

    answer = s;

    return answer;
}