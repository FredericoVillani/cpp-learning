#include <iostream>

using namespace std;

int soma_vetor(int n, int v[]){
    cin >> n;
    int sum = 0;
    for(int i=0; n>i;i++){
        cin >> v[i];
        sum = sum + v[i];
    }
    cout << sum << endl;
}


