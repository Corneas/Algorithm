#include <string>
#include <vector>
#include <deque>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;

    deque<int> dq;

    for (int i = 0; i < priorities.size(); ++i) {
        dq.push_back(priorities[i]);
    }

    while (location != -1) {
        int max = priorities[0];
        int size = priorities.size();
        for (int i = 1; i < priorities.size(); ++i) {
            if (priorities[i] > max) {
                dq.pop_front();
                dq.push_back(max);
                break;
            }
        }

        if (size < priorities.size()) {
            answer++;
        }
    }


    return answer;
}