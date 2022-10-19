#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;

    vector<string> v;

    int nPeople = 0;
    int turn = 1;

    for (int i = 0; i < words.size(); ++i) {
        if (i != 0 && i % n == 0) {
            turn++;
        }

        if(i != 0 && words[i].at(0) != words[i - 1].at(words[i - 1].length() - 1)) {
            answer.push_back((nPeople % n) + 1);
            answer.push_back(turn);
            return answer;
        }
        else if (words[i].length() == 1) {
            answer.push_back((nPeople % n) + 1);
            answer.push_back(turn);
            return answer;
        }
        else {
            for (int j = 0; j < v.size(); ++j) {
                if (words[i] == v[j]) {
                    answer.push_back((nPeople % n) + 1);
                    answer.push_back(turn);
                    return answer;
                }
            }
        }
        v.push_back(words[i]);
        nPeople++;
    }

    if (answer.size() == 0) {
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}