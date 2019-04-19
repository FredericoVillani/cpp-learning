#include <iostream>

using namespace std;

int main(){
int A, B;
cin >> A >> B;
if ((A+B)>=2 and (A+B)<=20){
if((A+B)%2 == 0){
    cout << "Bino" << endl;
}
if((A+B)%2 == 1){
    cout << "Cino" << endl;
}
}
}
