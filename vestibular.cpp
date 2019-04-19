#include <iostream>

using namespace std;

int main(){
int N,K;
vector v[81];
vector r[81];
K=0;
cin >> N;
for(int i=0; N-1>i;i++){
    cin >> v[i];
}
for(int i=0; N-1>i;i++){
    cin >> r[i];
}
for(int i=0; N-1>i;i++){
    if(v[i] == r[i]){
        K = K + 1;
    }
}
cout << K;

}
