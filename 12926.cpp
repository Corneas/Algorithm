#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main(void) {
    string s; 
    int n;
    string answer = "";

    getline(cin, s);
    cin >> n;
    //대문자 65 ~ 90
    //소문자 97 ~ 122
    for (int i = 0; i < s.length(); i++) {
        
        if (s[i] == ' ' || s[i] == '\t') {
            continue;
        }

        if (s[i] >= 65 && s[i] <= 90) {
            s[i] += n;
            if (s[i] > 90) {
                s[i] -= 26;
            }
        }
        
        if (s[i] >= 97 && s[i] <= 122) {
           
            if (s[i]+n> 122) {
                s[i] -= 26;
            }
            s[i] += n;
        } /*
          f 25 -> e가 나와야해. e는 101
          f는 102야 102 +25 - 26 = 101
                    102- 26 +25=101
          102 25 -> 127 -> 101 
          */
            
    }

    answer = s;

    cout << answer;

    return 0;
}

//string solution(string s, int n) {
//    string answer = "";
//
//    //대문자 65 ~ 90
//    //소문자 97 ~ 122
//    for (int i = 0; i < s.length(); i++) {
//
//        if (s[i] == ' ' || s[i] == '\t') {
//            continue;
//        }
//
//        if (s[i] >= 65 && s[i] <= 90) {
//            s[i] += n;
//            if (s[i] > 90) {
//                s[i] -= 26;
//            }
//        }
//
//        if (s[i] >= 97 && s[i] <= 122) {
//            s[i] += n;
//            if (s[i] > 122) {
//                s[i] -= 26;
//            }
//        }
//
//    }
//        answer = s;
//
//        return answer;
//
//}