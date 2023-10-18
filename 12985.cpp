#include <iostream>
#include <string>
#include <queue>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    int matchCount = 1;

    char str1;
    char str2;

    a--;
    b--;
    
    queue<char> matchTable;

    for (int i = 0; i < n; ++i) {
        if (i == a) {
            matchTable.push('A');
        }
        else if (i == b) {
            matchTable.push('B');
        }
        else {
            matchTable.push('0');
        }
    }


    while (true) {

        // 변수 2개를 선언, 두개를 대소비교 후 푸쉬

        str1 = matchTable.front();
        matchTable.pop();
        str2 = matchTable.front();
        matchTable.pop();

        if (str1 == 'A') {
            if (str2 == 'B') {
                break;
            }
        }
        else if (str1 == 'B') {
            if (str2 == 'A') {
                break;
            }
        }

        matchTable.push(max(str1, str2));

        if (matchTable.size() == n / 2) {
            matchCount++;
            n /= 2;
        }

    }

    return matchCount;
}

int main(void) {

    int n, a, b;


    cin >> n >> a >> b;

    solution(n, a, b);

}