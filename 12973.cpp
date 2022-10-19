#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = -1;

    stack<char> stk;

    if (s.empty() || s.length() == 1 || s.length() % 2 == 1) {
        answer = 0;
        cout << answer;
        return 0;
    }

    int temp = 0;
    for (int i = 0; i < s.length(); ++i) {

        if (stk.empty()) {
            stk.push(s[i]);
        }
        else if (s[i] != stk.top()) {
            stk.push(s[i]);
        }
        else if (s[i] == stk.top() && i != s.length() - 1) {
            stk.pop();
        }
        temp = i;
    }

    if (s[temp] == stk.top()) {
        stk.pop();
    }

    if (stk.empty()) {
        answer = 1;
    }
    else {
        answer = 0;
    }
    return answer;
}

int main(void) {
    string s = "abccaabaa";

    int answer = -1;

    stack<char> stk;

    if (s.empty() || s.length() == 1) {
        answer = 0;
        cout << answer;
        return 0;
    }

    int temp = 0;
    for (int i = 0; i < s.length(); ++i) {

        if (stk.empty()) {
            stk.push(s[i]);
        }
        else if (s[i] != stk.top()) {
            stk.push(s[i]);
        }
        else if (s[i] == stk.top() && s[i] != s[i + 1] && i != s.length() - 1) {
            stk.pop();
        }
        temp = i;
    }

    if (s[temp] == stk.top()) {
        stk.pop();
    }

    if (stk.empty()) {
        answer = 1;
    }
    else {
        answer = 0;
    }

    cout << answer;
}