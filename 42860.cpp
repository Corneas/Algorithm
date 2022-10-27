#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string name) {
    int answer = 0;

    string temp = "";
    for (int i = 0; i < name.length(); ++i) {
        temp += 'A';
    }

    int joystick = 0;
    int i = 0;

    if (temp == name) {
        return 0;
    }

    //if (name[name.length() / 2] == 'A' || name[name.length() - 1] == 'A') {
    //    joystick--;
    //}
        
    while (temp != name) {
        if (name[i] - temp[i] < 13) {
            temp[i] = 'A';
            // 65 ~ 90
            while (temp[i] != name[i]) {
                temp[i]++;
                joystick++;
            }
        }
        else {
            temp[i] = 'Z';
            joystick++;
            // 65 ~ 90
            while (temp[i] != name[i]) {
                temp[i]--;
                joystick++;
            }
        }

        ++i;
    }

    answer += joystick + i - 1;

    return answer;
}

int main(void) {

    string s;
    cin >> s;
    cout << solution(s);
    
}