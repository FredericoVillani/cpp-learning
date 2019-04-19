#include <iostream>;

using namespace std;

int main(){
    //int x, y;
    //cout << "Digite dois valores" << endl;
   // cin >> x >> y;
    double raio;
    cin >> raio;
   // cout << "A soma é:" <<endl;
  //  cout << x+y << endl;
    cout.precision(6);
    cout.setf(ios::fixed);
    cout << raio*raio*3.14159 << endl;
}
