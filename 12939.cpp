#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> v;
    int i = 0;

    for (int i = 0; i < s.length(); ++i) {
        v.push_back(stoi(s));
        while (s[i] != ' ') {
            if (i >= s.length()) {
                break;
            }
            ++i;
        }
        s.erase(s.begin(), s.begin() + i);

        i = 0;
    }

    sort(v.begin(), v.end());

    answer += to_string(v.front()) + " " + to_string(v.back());

    return answer;
}