#include<string>
#include <iostream>
#include <queue>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    queue<string> q;

    if (s[0] == ')') {
        return false;
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            q.push("(");
        }
        else if (s[i] == ')') {
            if (q.front() == "(") {
                q.pop();
            }
        }
    }

    q.empty() ? answer = true : answer = false;

    return answer;
}