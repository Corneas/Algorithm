#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<string> uid;
    vector<string> uName;

    string _uid = "";
    string _uName = "";

    for (int i = 0; i < record.size(); ++i) {
        if (record[i].at(0) == 'E') {
            record[i].erase(record[i].begin(), record[i].begin() + record[i].find(' ') + 1);
            for (int j = 0; j < record[i].find(' '); ++j) {
                _uid += record[i].at(j);
            }
            for (int j = record[i].find(' ') + 1; j < record[i].length(); ++j) {
                _uName += record[i].at(j);
            }
            answer.push_back(_uName + "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.");
            uid.push_back(_uid);
            uName.push_back(_uName);
        }
        else if (record[i].at(0) == 'L') {
            record[i].erase(record[i].begin(), record[i].begin() + record[i].find(' '));
            for (int j = 0; j < record[i].find(' '); ++j) {
                _uid += record[i].at(j);
            }
            for (int j = 0; j < uid.size(); ++j) {
                if (uid[j] == _uid) {
                    answer.push_back(uName[j] + "´ÔÀÌ ³ª°¬½À´Ï´Ù.");
                }
            }
        }
        _uid.clear();
        _uName.clear();
    }


    return answer;
}

int main(void) {

    vector<string> record;

    record.push_back("Enter uid1234 Muzi");
    record.push_back("Enter uid4567 Prodo");
    record.push_back("Leave uid1234");
    record.push_back("Enter uid1234 Prodo");
    record.push_back("Change uid4567 Ryan");

    vector<string> uid;
    vector<string> uName;
    vector<string> answer;

    string _uid;
    string _uName;



}