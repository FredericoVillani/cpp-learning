#include <iostream>

using namespace std;

bool eh_primo(int x){
    int divisor = 0;
    for(int i=1; x>=i; i++){
        if(x%i ==0){
            divisor = divisor + 1;
        }
    }
    if (divisor>2){
        return false;
    }
    else if(divisor == 2 ){
        return true;
    }
}

int main(){
    int x;

    cin>>x;

    if(eh_primo(x)){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }
}
