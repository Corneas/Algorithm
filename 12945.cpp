#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int Fibo[100001];
    Fibo[0] = 0;
    Fibo[1] = 1;

    for (int i = 2; i <= n; ++i) {
        Fibo[i] = (Fibo[i - 2] + Fibo[i - 1]) % 1234567;
    }

    return Fibo[n];

    //vector<unsigned int> v;

    //v.push_back(0);
    //v.push_back(1);

    //for (int i = 2; i <= n; ++i) {
    //    v.push_back((v[i - 2] + v[i - 1]) % 12345678);
    //}

    //answer = v.back();
}