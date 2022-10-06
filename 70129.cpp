#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> v;
    int totalZero = 0;
    int length = 0;
    int change = 0;

    while (true) {
        if (s.length() == 1) {
            break;
        }
        v.clear();
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '0') {
                totalZero++;
                s.erase(s.begin() + i, s.begin() + i + 1);
                i--;
            }
        }

        length = s.length();

        while (length > 0) {
            v.push_back(length % 2);
            length /= 2;
        }
        s = "";
        for (int i = v.size() - 1; i >= 0; --i) {
            s += to_string(v[i]);
        }
        change++;
    }

    answer.push_back(change);
    answer.push_back(totalZero);

    return answer;
}