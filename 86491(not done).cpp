#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = (sizes[0][0] * sizes[0][1]);

    for (int i = 0; i < sizes.size(); i++) {
        for (int j = 0; j < sizes.size() - 1; j++) {
            answer = sizes[i][j] * sizes[i][j+1];
        }
    }

    return answer;
}