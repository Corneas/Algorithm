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

    while (!qProgresses.empty()) {
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

            if (count > 0) {
                answer.push_back(count);
            }
            count = 0;
        }
        
        for (int i = 0; i < qProgresses.size(); i++) {
            qProgresses.push(qProgresses.front() + speeds[i]);
            qProgresses.pop();
        }
    }
    

    return answer;
}

int main(void) {
    vector<int> pro;
    vector<int> speeds;
    vector<int> answer;
    pro.push_back(95);
    pro.push_back(90);
    pro.push_back(99);
    pro.push_back(99);
    pro.push_back(80);
    pro.push_back(99);
    pro.push_back(98);
    pro.push_back(96);
    speeds.push_back(1);
    speeds.push_back(1);
    speeds.push_back(1);
    speeds.push_back(1);
    speeds.push_back(1);
    speeds.push_back(1);
    speeds.push_back(1);
    speeds.push_back(1);

    int count = 0;

    queue<int> qProgresses;
    queue<int> qSpeeds;

    for (int i = 0; i < pro.size(); i++) {
        qProgresses.push(pro[i]);
        qSpeeds.push(speeds[i]);
    }

    while (!qProgresses.empty()) {
        if (qProgresses.front() >= 100) {
            while(!qProgresses.empty()) {
                if (qProgresses.front() >= 100) {
                    count++;
                    qProgresses.pop();
                    qSpeeds.front();
                }
                if (qProgresses.front() < 100) {
                    break;
                }
            }

            if (count > 0) {
                answer.push_back(count);
            }
        }

        for (int i = 0; i < qProgresses.size(); i++) {
            qProgresses.push(qProgresses.front() + qSpeeds.front());
            qProgresses.pop();
        }
        count = 0;
    }

}