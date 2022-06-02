#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> qProgresses;
    queue<int> qSpeeds;

    int count = 0;

    for (int i = 0; i < progresses.size(); i++) {
        qProgresses.push(progresses[i]);
        qSpeeds.push(speeds[i]);
    }

    while (true) {
        if (qProgresses.front() >= 100) {
            while (!qProgresses.empty()) {
                if (qProgresses.front() >= 100) {
                    count++;
                    qProgresses.pop();
                    qSpeeds.pop();
                }
                if (qProgresses.front() < 100) {
                    break;
                }
            }
            answer.push_back(count);
            count = 0;
        }

        for (int i = 0; i < qProgresses.size(); i++) {
            qProgresses.push(qProgresses.front() + qSpeeds.front());
            qSpeeds.push(qSpeeds.front());
            qProgresses.pop();
            qSpeeds.pop();
        }

        if (qProgresses.empty()) {
            break;
        }
    }

    return answer;
}