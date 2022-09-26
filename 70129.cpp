#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;

    int bCount = 0;     // 이진변환 개수
    int zCount = 0;     // 삭제할 0의 개수
    int length = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '0') {
            s.erase(s.begin() + i, s.begin() + i + 1);
            zCount++;
            --i;
        }
        length - s.length();

        while (length > 0) {

        }

    }

    return answer;
}