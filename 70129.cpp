#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;

    int bCount = 0;     // ������ȯ ����
    int zCount = 0;     // ������ 0�� ����
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