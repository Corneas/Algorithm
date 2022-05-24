#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCount = 0;
    int yCount = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 80 || s[i] == 112)
            pCount++;
        if (s[i] == 89 || s[i] == 121)
            yCount++;
    }

    if (pCount != yCount) answer = false;

    return answer;
}