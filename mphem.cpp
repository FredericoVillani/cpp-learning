#include <iostream>

using namespace std;

int main(){
int H, M, M2, x;
M = 0;
H = 0;
cin >> M;

cout << (M- M%60)/60 << endl << M%60;
}
