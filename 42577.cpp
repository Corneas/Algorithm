#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    set<string> str;

    sort(phone_book.begin(), phone_book.end());

    for (int i = 0; i < phone_book.size(); ++i) {
        for (int j = i + 1; j < phone_book.size(); ++j) {
            if (phone_book[j].substr(0, phone_book[i].length()) == phone_book[i]) {
                return false;
            }
            else {
                break;
            }
        }
    }

    return true;
}

#include <iostream>

int main(void) {

    vector<string> v;
    v.push_back("119");
    v.push_back("11874223");
    v.push_back("1195524421");

    cout << solution(v);
}