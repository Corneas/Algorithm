#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int total = 0;

    // 만들어질 수 있는 모든 경우의 수

    sort(d.begin(), d.end());

    for (int i = 0; i < d.size(); i++) {
        total += d[i];
        if (budget - total >= 0) {
            answer++;
        }
        else if (budget - total < 0) {
            total -= d[i];
        }
    }

    return answer;
}