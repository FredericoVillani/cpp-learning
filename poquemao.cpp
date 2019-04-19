#include <iostream>

using namespace std;

int main(){
int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
 	if (N>= X + Y + Z){
    cout << 3;
    }
    else if( N>= X+Y || N>= X+Z || N>= Y+Z){
    cout << 2;
    }
    else if( N>= X || N>= Y || N>= Z){
    cout << 1;
    }
    else{
        cout << 0;
    }

}
