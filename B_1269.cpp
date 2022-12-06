#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(void) {

    set<int> A;
    set<int> B;

    int a = 0;
    int b = 0;

    cin >> a >> b;

    int num;
    for (int i = 0; i < a; ++i) {
        cin >> num;
        A.insert(num);
    }

    for (int i = 0; i < b; ++i) {
        cin >> num;
        B.insert(num);
    }

    int temp = a;

    for (auto iter : B) {
        if (A.find(iter) != A.end()) {
            --a;
        }
    }

    for (auto iter : A) {
        if (B.find(iter) != B.end()) {
            --b;
        }
    }

    cout << a + b;

}

//int main(void) {
//
//    map<int, int> A;
//    map<int, int> B;
//
//    int a = 0;
//    int b = 0;
//    
//    cin >> a >> b;
//
//    int num;
//    for (int i = 0; i < a; ++i) {
//        cin >> num;
//        A[i] = num;
//    }
//
//    for (int i = 0; i < b; ++i) {
//        cin >> num;
//        B[i] = num;
//    }
//
//    int temp = a;
//
//    cout << "B" << endl;
//
//    for (auto iter : B) {
//        if (A.find(iter.second) != A.end()) {
//            cout << "교집합 : " << iter.second << endl;
//            --a;
//        }
//    }
//
//    cout << endl << "A" << endl;
//
//    for (auto iter : A) {
//        if (B.find(iter.second) != B.end()) {
//            cout << "교집합 : " << iter.second << endl;
//            --b;
//        }
//    }
//
//    //for (int i = 0; i < b; ++i) {
//    //    if (A.find(B[i]) != A.end()) {
//    //        --a;
//    //    }
//    //}
//
//    //for (int i = 0; i < temp; ++i) {
//    //    if (B.find(A[i]) != B.end()) {
//    //        --b;
//    //    }
//    //}
//
//    cout << a + b;
//
//}
