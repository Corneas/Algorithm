using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long total = 0;

    for (int i = 1; i <= count; i++) {
        total += (price * i);
    }

    if (money - total < 0) answer += -1*(money - total);

    return answer;
}