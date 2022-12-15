#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    queue<string> par;

    for (int i = 0; i < participant.size(); ++i) {
        par.push(participant[i]);
    }

    for (int i = 0; i < completion.size(); ++i) {
        if (par.front() != completion[i]) {
            answer += par.front();
            par.pop();
            --i;
        }
        else {
            par.pop();
        }
    }

    while (!par.empty()) {
        answer += par.front();
        par.pop();
    }

    return answer;
}