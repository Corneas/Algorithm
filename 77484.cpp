#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;

    int winning_count = 0;
    int unknown_count = 0;

    int maxNum = 0;
    int minNum = 0;

    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());

    for (int j = 0; j < lottos.size(); ++j) {
        if (lottos[j] == 0) {
            unknown_count++;
        }
        for (int i = 0; i < lottos.size(); ++i) {
            if (lottos[j] == win_nums[i]) {
                winning_count++;
            }
        }
    }
        
    maxNum = 7 - unknown_count - winning_count;
    minNum = 7 - winning_count;
    if (maxNum <= 0) {
        maxNum = 1;
    }
    else if (maxNum >= 7) {
        maxNum = 6;
    }

    if (minNum >= 7) {
        minNum = 6;
    }
    answer.push_back(maxNum);
    answer.push_back(minNum);

    return answer;
}

