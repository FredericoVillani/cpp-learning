#include <iostream>

using namespace std;

int main(){
int X,Y;
cin >> X >> Y;
if(X>0){
    if(Y>0){
        cout << "Q1";
    }
    else if(Y<0){
        cout << "Q4";
    }
}
if(X<0){
    if(Y>0){
        cout << "Q2";
    }
    else if(Y<0){
        cout << "Q3";
    }
}
if(X == 0){
    cout << "eixos";
}
else if(Y == 0){
    cout << "eixos";
}
}
