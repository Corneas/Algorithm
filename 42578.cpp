#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

//int solution(vector<vector<string>> clothes) {
//    int answer = 0;
//
//    map<string, string> m;
//    set<string> kind;
//
//    for (int i = 0; i < clothes.size(); ++i) {
//        kind.insert(clothes[i][1]);
//        m.insert({ clothes[i][i] }, clothes[i]);
//    }
//
//
//    return answer;
//}

int main(void) {

    int rise = 0;
    int atk = 7;
    int initAtk = 7;

    int fragmentAmount;


    while (true) {

        cout << "���� ������ ��ȭ�� : ";
        cin >> fragmentAmount;
        
        if (rise > 0)
        {
            atk -= round(initAtk * rise * 0.01f);
            //GameManager.Instance.Player.playerBase.Attack -= GameManager.Instance.Player.playerBase.InitAttack * rise;
        }

        cout << "�ʱ� ���ݷ� : " << atk << endl;

        rise = fragmentAmount / 20;
        rise = ceil(rise);
        if (rise < 0)
            rise = 0;
        else if (rise > 70)
            rise = 70;
        cout << "��·� : " << rise << "%" << endl;
        cout << "��ȭ�� : " << initAtk * rise * 0.01f << endl;
        cout << "��ȭ�� : " << round(initAtk * rise * 0.01f) << endl;
        atk += round(initAtk * rise * 0.01f);

        cout << "��ȭ �� ���ݷ� : " << atk << endl;

    }
    return 0;
}