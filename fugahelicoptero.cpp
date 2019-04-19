#include <iostream>

using namespace std;

int main(){
int H, P, F, D;
cin >> H >> P >> F >> D;
if(D == -1){
    if(H>F){
        cout << "S";
            }
    if(H<F){
        cout << "N"
    }
}
else if (D == 1){
    if(H>F){
    cout << "N";}
    if(H<F){
        cout << "S";}
}

}
