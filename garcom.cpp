#include <iostream>

using namespace std;

int main(){
int N, L, C;
cin >> N;
int X = 0;
int q =0;
while(N > X){
    cin >>L >> C;
    if(L>C){
    q = q + C;
    }
    X = X+1;
}
    cout << q;
}

