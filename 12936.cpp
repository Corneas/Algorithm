#include <string>
#include <vector>

using namespace std;

long long Fac(int n) {

    if (n <= 1) return n;

    n *= Fac(n - 1);
}

vector<int> solution(int n, long long k) {
    vector<int> answer;

    if (n == 1) {
        answer.push_back(1);
        return answer;
    }

    int sNum = 1;
    int f = Fac(f);
    while (k > f) {
        ++sNum;
        f = Fac(sNum);
    }
    --sNum;

    k -= (sNum - 1) * (Fac(sNum - 1));

    return answer;
}

#include <iostream>
int main(void) {

    int n;
    cin >> n;
    cout << Fac(n);

    //int n;
    //long long k;

    //cin >> n >> k;
    //vector<int> answer;

    //answer = solution(n, k);

    //for (int i = 0; i < answer.size(); ++i) {
    //    cout << answer[i] << " ";
    //}

}