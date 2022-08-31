#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    vector<int> N1 = { 1,2,3,4,5 };
    vector<int> N2 = { 2,1,2,3,2,4,2,5 };
    vector<int> N3 = { 3,3, 1,1, 2,2, 4,4, 5,5 };

    int answerN1 = 0;
    int answerN2 = 0;
    int answerN3 = 0;

    for (int i = 0; i < answers.size(); ++i) {
        if (N1[i % N1.size()] == answers[i]) {
            answerN1++;
        }
        if (N2[i % N2.size()] == answers[i]) {
            answerN2++;
        }
        if (N3[i % N3.size()] == answers[i]) {
            answerN3++;
        }
    }

    if (answerN1 > answerN2 && answerN1 > answerN3) {
        answer.push_back(1);
    }
    else if (answerN2 > answerN1 && answerN2 > answerN3) {
        answer.push_back(2);
    }
    else if (answerN1 == answerN2 && answerN1 == answerN3) {
        answer.push_back(1);
        answer.push_back(2);
        answer.push_back(3);
    }
    else if (answerN1 == answerN2) {
        answer.push_back(1);
        answer.push_back(2);
    }
    else if (answerN1 == answerN3) {
        answer.push_back(1);
        answer.push_back(3);
    }
    else if (answerN2 == answerN3) {
        answer.push_back(2);
        answer.push_back(3);
    }
    else {
        answer.push_back(3);
    }

    return answer;
}