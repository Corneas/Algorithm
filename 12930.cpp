#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
    int stringCount = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            stringCount = 0;
            continue;
        }
        else if (stringCount % 2 == 0) {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
        stringCount++;
    }

    answer = s;

    return answer;

}