#include <vector>
#include <set>

using namespace std;

#include <iostream>

int Fac(int n) {

    if (n <= 0) return n;

    n = n * Fac(n - 1);
}

int solution(vector<int> nums)
{
    int answer = 0;

    set<int> s(nums.begin(), nums.end());

    
    if (s.size() >= nums.size() / 2) {
        answer = Fac(nums.size() / 2);
    }
    else {
        answer = s.size();
    }

    return answer;
}