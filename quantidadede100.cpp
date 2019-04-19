#include <iostream>
#include <cmath>

using namespace std;

int main(){
int n;
int quantidade;
int seq[1000];
cin >> n;
for(int i= 0; i< n; i++){
    cin >> seq[i];
}
    int quantidade = 0;
for (int i=0; i<n; i++){
    if(seq[i] == 1 and seq[i+1] == 0 and seq[i+2]== 0){
        quantidade = quantidade + 1;
    }

}
    cout << quantidade << endl;
}
