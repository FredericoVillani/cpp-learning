#include <iostream>
using namespace std;
int main(){
int r;
cin>> r;
float pi = 3.1416;
float ac = pi*r*r;
cout.precision(2);
cout.setf(ios::fixed);
cout << ac; }
