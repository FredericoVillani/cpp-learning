#include <iostream>

using namespace std;

int main(){
int A,B,C,D;
cin >> A >> B >> C >> D;
if(A== (B+C+D)){
        if(B+C == D){
            if(B == C){
                cout << "S";
            }
            else{
                cout << "N";
            }
        }
        else {
            cout << "N";
        }

}
else{
    cout << "N";
}
}
