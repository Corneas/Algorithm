#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string name) {
    int answer = -1;
    int i = 0;
    int aCount = 0;
    string temp = "";

    for (int i = 0; i < name.length(); ++i) {
        temp += "A";
    }

    while (i < name.length() / 2) {
        if (name[i] == 'A') {
            aCount++;
            answer--;
            ++i;
            continue;
        }

        if (name[i] <= 77) {
            answer += name[i] - temp[i];

            if (aCount > 0) {
                answer += aCount;
                aCount = 0;
            }
        }
        else {
            answer++;
            temp[i] = 'Z';
            answer += temp[i] - name[i];

            if (aCount > 0) {
                answer += aCount;
                aCount = 0;
            }
        }
        ++i;
        ++answer;
    }

    return answer;
}

int main(void) {

    string s;
    cin >> s;
    cout << solution(s);
    
}