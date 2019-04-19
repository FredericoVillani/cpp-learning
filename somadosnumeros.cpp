#include <iostream>

using namespace std;

int main (){
int N, x, S, K;
x = 0;
S = 0;
cin >> N;
while (N > x){
    cin >> K;
    S = S + K;
    x = x +1;
}
cout << S;
}
