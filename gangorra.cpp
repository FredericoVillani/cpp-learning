#include <iostream>

using namespace std;

int main(){

int P1, C1, P2, C2;

cin >> P1 >> C1 >> P2 >> C2;

    if (P1>= 10 and P1<=100 and P2>= 10 and P2<=100 and C1>= 10 and C1<=100 and C2>= 10 and C2<=100){
        if (P1*C1 == P2*C2){
        cout << 0 << endl;
        }
        if (P1*C1 > P2*C2){
        cout << -1 << endl;
        }
        if (P1*C1 < P2*C2){
        cout << 1 << endl;
        }
    }
}
