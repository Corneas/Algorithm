#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;

    for (int row = 0; row < sizes.size(); row++) {

        for (int i = 0; i < sizes.size(); i++) {
            if (sizes[i][0] < sizes[i][1]) {
                swap(sizes[i][0], sizes[i][1]);
            }
        }

        for (int column = 0; column < sizes.size(); column++) {
            if (sizes[row][0] * sizes[column][1] > answer) {
                answer = sizes[row][0] * sizes[column][1];
            }
        }
    }

    return answer;
}
