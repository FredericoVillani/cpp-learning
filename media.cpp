#include <iostream>

using namespace std;

int main(){
int a,b,resultado;
cin >> a >> b;
resultado = (a+b)/2;
cout.precision(2);
cout.setf(ios::fixed);
cout << resultado << endl;
}
