#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int v[N];
    int i;

    for(i = 0; i< N; i++){
        cin >> v[i];
        }
    for(i =0; i < N; i++){
            int K = 0;
    for(i= 0; i < N;i++){
        if(v[i] == v[i++]){
        K = K + 1;}
        if (v[i] != v[i++]){
        K = 0;
    }
    }

}
}
