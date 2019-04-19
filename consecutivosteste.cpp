#include <iostream>

using namespace std;

int main() {
    int n;
    int v[1005];
    int quant;
    cin >> n;
    for(int i = 0; i<n; n++){
        cin >> v[i];
    }
    for(int i = 0; i<n; n++){
        if(v[i] == v[i+1]){
         quant++;
        }else{
         quant = 0;
        }
}
    cout << quant << endl;
    return 0;
    }
