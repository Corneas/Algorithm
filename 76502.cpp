#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    string temp = "";
    string temp2 = "";
    stack<char> stk;
    queue<char> q;

    for (int i = 0; i < s.size(); ++i) {
        q.push(s[i]);
    }

    for (int j = 0; j < s.size(); ++j) {

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[i]);
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if (stk.empty()) stk.push(-1);
                if (s[i] - 1 == stk.top() || s[i] - 2 == stk.top()) {
                    stk.pop();
                }
            }
        }

        if (stk.empty()) answer++;

        while (!stk.empty()) {
            stk.pop();
        }

        temp = "";
        temp2 = "";

        temp2 = q.front();
        q.pop();

        while (!q.empty()) {
            temp += q.front();
            q.pop();
        }
        temp += temp2;
        for (int k = 0; k < temp.size(); ++k) {
            q.push(temp[k]);
        }
        s = temp;
    }

    return answer;
}