#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string new_id) {
    string answer = "";

    // 1´Ü°è
    for (int i = 0; i < new_id.size(); i++) {
        if (new_id[i] >= 65 && new_id[i] <= 90) {
            new_id[i] += 32;
        }
    }

    answer = new_id;

    return answer;
}
