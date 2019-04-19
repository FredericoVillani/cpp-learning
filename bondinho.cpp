#include <iostream>

using namespace std;

int main(){
int A, B;
string resultado;
cin >> A >> B;
if(1<= A and A<=50){
    if(1<=B and B<=50){
        if((A+B)>=2 and (A+B)<=50){
                resultado = "S";
        }
        else{
            resultado = "N";
        }
    }
}else{
            resultado = "N";
}
 cout << resultado << endl;
}
