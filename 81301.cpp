#include <string>
#include <vector>
#include <regex>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;

#pragma region regex_replace
    //s = regex_replace(s, regex("zero"), "0");
    //s = regex_replace(s, regex("one"), "1");
    //s = regex_replace(s, regex("two"), "2");
    //s = regex_replace(s, regex("three"), "3");
    //s = regex_replace(s, regex("four"), "4");
    //s = regex_replace(s, regex("five"), "5");
    //s = regex_replace(s, regex("six"), "6");
    //s = regex_replace(s, regex("seven"), "7");
    //s = regex_replace(s, regex("eight"), "8");
    //s = regex_replace(s, regex("nine"), "9");
#pragma endregion

#pragma region ¼öÀÛ¾÷
        //for (int i = 0; i < s.size() - 1; ++i) {
    //
    //    if (s[i] == 'z') {
    //        s.replace(i, 4, "0");
    //    }
    //    if (s[i] == 'o') {
    //        s.replace(i, 3, "1");
    //    }
    //    if (s[i] == 't') {
    //        if (s[i + 1] == 'w') {
    //            s.replace(i, 3, "2");
    //        }
    //        else if (s[i + 1] == 'h') {
    //            s.replace(i, 5, "3");
    //        }
    //    }
    //    if (s[i] == 'f') {
    //        if (s[i + 1] == 'o') {
    //            s.replace(i, 4, "4");
    //        }
    //        else if (s[i + 1] == 'i') {
    //            s.replace(i, 4, "5");
    //        }
    //    }
    //    if (s[i] == 's') {
    //        if (s[i + 1] == 'i') {
    //            s.replace(i, 3, "6");
    //        }
    //        else if (s[i + 1] == 'e') {
    //            s.replace(i, 5, "7");
    //        }
    //    }
    //    if (s[i] == 'e') {
    //        s.replace(i, 5, "8");
    //    }
    //    if (s[i] == 'n') {
    //        s.replace(i, 4, "9");
    //    }
    //    
    //}
#pragma endregion

    answer = stoi(s);

    return answer;
}