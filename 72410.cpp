#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string new_id) {
    string answer = "";

    // 1단계
    for (int i = 0; i < new_id.size(); ++i) {
        if (new_id[i] >= 65 && new_id[i] <= 90) {
            new_id[i] += 32;
        }
    }

    // 2단계 45 ~ 46 , 48 ~ 57, 97 ~ 122, _
    for (int i = 0; i < new_id.size(); ++i) {
        if (new_id[i] >= 45 && new_id[i] <= 46 || new_id[i] >= 48 && new_id[i] <= 57 || new_id[i] >= 97 && new_id[i] <= 122 || new_id[i] == '_') {
            continue;
        }
        else {
            new_id.erase(new_id.begin() + i);
            --i;
        }
    }

    int period = 0;
    // 3단계 46
    for (int i = 0; i < new_id.size(); ++i) {
        if (new_id[i] == 46) {
            period = i;
            while (new_id[period] == 46) {
                period++;
            }
            new_id.erase(new_id.begin() + i + 1, new_id.begin() + period);
        }
    }

    // 4 - 1단계
    if (new_id[0] == 46) {
        new_id.erase(0, 1);
    }

    // 5단계
    if (new_id.empty()) {
        new_id += 'a';
    }

    // 6단계
    if (new_id.size() >= 16) {
        new_id.erase(15);
    }

    // 4-2단계
    if (new_id[new_id.size() - 1] == 46) {
        new_id.erase(new_id.size() - 1, 1);
    }

    // 7단계
    if (new_id.size() <= 2) {
        while (new_id.size() < 3) {
            new_id += new_id[new_id.size() - 1];
        }
    }

    answer = new_id;

    return answer;
}