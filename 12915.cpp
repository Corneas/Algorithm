#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;

    for (int i = 0; i < strings.size(); i++) {
        for (int j = i + 1; j < strings.size(); j++) {
            if (strings[i][n] > strings[j][n]) {
                strings[i].swap(strings[j]);
            }
            else if (strings[i][n] == strings[j][n] && strings[i] > strings[j]) {
                strings[i].swap(strings[j]);
            }
        }
    }

    answer = strings;
    return answer;
}