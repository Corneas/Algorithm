#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() == 1) {
        arr[0] = -1;
        answer = arr;
        return answer;
    }

    int min = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[min] > arr[i])
            min = i;
    }

    arr.erase(arr.begin() + min);

    answer = arr;
    
    return answer;
}