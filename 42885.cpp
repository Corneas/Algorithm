#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <deque>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    deque<int> dq;

    for (int i = 0; i < people.size(); ++i) {
        dq.push_back(people[i]);
    }

    sort(dq.rbegin(), dq.rend());

    while (!dq.empty()) {

        if (dq.front() <= limit / 2) {
            answer += ceil((dq.size() + 1) / 2);
            break;
        }

        if (dq.front() + dq.back() <= limit) {
            dq.pop_back();
        }
        ++answer;
        dq.pop_front();
    }

    return answer;
}