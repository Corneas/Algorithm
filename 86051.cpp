#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;

    int total = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        total += numbers[i];
    }

    answer += 45 - total;

    return answer;
}