#include <iostream>

using namespace std;

int main(){
int X, Y, Z, K;
cin >> X >> Y >> Z;
K = 0;
if(X%2 == 0 || X%5 == 0){
    K= K+1;
}
if(Y%2 == 0 || Y%5 == 0){
    K= K+1;
}
if(Z%2 == 0 || Z%5 == 0){
    K= K+1;
}
cout << K;
}
