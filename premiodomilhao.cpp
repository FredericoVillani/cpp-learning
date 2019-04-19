#include <iostream>

using namespace std;

int main(){
int N, A, S, x;
x = 0;
S = 0;
cin >> N;
    while(N > x and S < 1000000){
            cin >> A;
            S = S + A;
            x = x+ 1;
            }
            cout << x;
}
