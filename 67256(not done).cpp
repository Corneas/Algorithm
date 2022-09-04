#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";

    int lHand = 0;
    int rHand = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
            answer += "L";
        }
        if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
            answer += "R";
        }
    }

    return answer;
}