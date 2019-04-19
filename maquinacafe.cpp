#include <iostream>

using namespace std;

int main(){
int A1, A2, A3;
cin >> A1 >> A2 >> A3;
int T1,T2,T3;
T1 = 2*A2 + 4*A3;
T2 = 2*A1 + 2*A3;
T3 = 2*A2 + 4*A1;

if (T1 <= T2 and T1 <= T3){
    cout << T1;
}
else if (T2<= T1 and T2 <= T3){
    cout << T2;
}
else if (T3 <= T1 and T3 <= T2){
    cout << T3;
}
}
